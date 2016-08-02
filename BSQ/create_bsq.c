#include "ft_header.h"

int         create_bsq(char *file, t_max *max, int nbr_lines, int nbr_columns)
{
    char    *holder;
    int     fold;
    int     i;

    i = 1;
    if ((nbr_columns = first_line(file, &fold)) == -1)
        return (-1);
    if ((holder = (char*)malloc(sizeof(char) * (nbr_columns + 1))) == NULL)
        return (-1);
    holder[nbr_columns++] = 0;
    while (i <= nbr_lines)
    {
        if ((read(fold, holder, nbr_columns)) < 0)
            return (-1);
        if (i++ <= max->y_max - x_max->size || i - 1 > max->y_max)
            write(1, holder, nbr_columns);
        else
            print_lines(holder, max, nbr_columns);
    }
    free(holder);
    return(fold);
}
