#include "ft_header.h"

int     ft_stdin(void)
{
    int     fold;
    char    *buffer;
    int     ret;

    buffer = (char*)malloc(sizeof(char) * 4096);
    if (buffer == NULL)
        return (-1);
    fold = open("stdin_map", O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0666);
    if (fold == -1)
        return (-1);
    while ((ret = read(0, buffer, sizeof(buffer) - 1)))
    {
        buffer[ret] = '\0';
        write(fold, buffer, ft_strlen(buffer));
    }
    if (close(fold) == -1)
        return (-1);
    if (buffer == NULL)
        return (-1);
    free(buffer);
    return (1);
}

int     bsq(int fold, int nbr_lines, int nb_columns, t_max *max)
{
    char            *holder;
    unsigned int    *ptr1;
    unsigned int    *ptr2;
    int             i;

    i = 0;
    holder = (char*)malloc(sizeof(char) * (nb_columns + 2));
    ptr1 = (unsigned int*)malloc(sizeof(unsigned int) * (nb_columns + 1));
    ptr2 = (unsigned int*)malloc(sizeof(unsigned int) * (nb_columns + 1));
    if (holder == NULL || ptr1 == NULL || ptr2 == NULL)
        return (-1);
    if (start_first_line(fold, ptr1, holder, max) == -1)
        return (-1);
    while (++i < nbr_lines)
    {
        if (read(fd, &holder[0], nb_columns + 1) != nb_columns + 1)
            return (map_error());
        if ((put_int_tab(&tmp[0], ptr1, ptr2, max)) == -1)
            return (-1);
        ft_swap(&ptr1, &ptr2);
    }
    if (read(fd, &tmp[0], nb_cols + 1) > 0)
        return (map_error());
    free_ptr(&ptr1, &ptr2, &tmp);
    return (0);
}

int     prepare_bsq(char *file)
{
    int     nbr_lines;
    int     nbr_columns;
    t_max   maximum;
    int     fold;

    maximum.size = 0;
    maximum.new = 1;
    if ((nbr_lines = nbr_of_lines(&fold, file)) == -1)
        return (-1);
    if ((nbr_columns = nbr_columns(file)) == -1)
        return (-1);
    if (nbr_lines == 0 || nbr_columns == 0)
        return (map_error());
    if ((bsq(fd, nbr_lines, nbr_columns, &maximum)) == -1)
    {
        close(fold);
        return (-1);
    }
    close(fold);
    fold = disp_bsq(file, &maximum, nbr_lines, nbr_columns);
    return ((fold == -1) ? (-1) : (close(fold)));
}

void    verif(char *file)
{
    int     fold;

    if ((fold = open(file, O_RDONLY)) < 0)
        ft_putstr("map error\n");
    close(fold);
}

int     main(int argc, char **argv)
{
    int     tail;
    int     max;
    int     i;

    tail = 0;
    max = 0;
    if (argc > 1)
    {
        i = 1;
        while (i < argc)
        {
            verif(argv[i]);
            if ((prepare_bsq(argv[i])) == -1 && i == argc - 1)
                return (-1);
            i++;
        }
    }
    else if (ft_stdin() == 1)
    {
        if ((prepare_bsq("stdin_map")) == -1)
            return (-1);
    }
    else
        return (map_error());
    return (0);
}
