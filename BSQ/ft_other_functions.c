#include "ft_header.h"

void        ft_swap(unsigned int **ptr1, unsigned int **ptr2)
{
    unsigned int    *holder;

    holder = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = holder;
}

void        free_ptr(unsigned int **ptr1, unsigned int **ptr2, char **tmp)
{
    if (*ptr1)
        free(*ptr1);
    if (*ptr2)
        free(*ptr2);
    if (*tmp)
        free(*tmp);
}

int         find_minimum(unsigned int a, unsigned int b, unsigned int c)
{
    if (a <= b && a <= c)
        return (a);
    else if (b <= a && b <= c)
        return (b);
    else
        return (c);
}

int         store_max(t_max *max, int i, int line, int current)
{
    max->size = current;
    max->x_max = i + 1;
    max->y_max = line;
    return (current);
}

int         nbr_of_lines(int *fold, char *file)
{
    int     i;
    char    num_lines[15];

    i = 0;
    if ((*fold = open(file, O_RDONLY)) == -1)
        return (-1);
    while (read(*fold, &num_lines[i], 1) > 0 && num_lines[i] != '\n' && i < 15)
        i = i + 1;
    if (i == 14)
        return (map_error());
    num_lines[i] = 0;
    if (check_nbr_lines(num_lines) == -1 || i == 0)
    {
        close(*fold);
        return (-1);
    }
    return (ft_atoi(num_lines));
}
