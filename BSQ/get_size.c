#include "ft_header.h"

int         nbr_columns(char *file)
{
    int         fold;
    char        holder;
    int         i;

    i = 0;
    if ((fd = open(file, O_RDONLY)) == -1)
        return (-1);
    while (read(fold, &holder, 1) > 0 && holder != '\n')
        i = i + 1;
    if ((close(fold)) == -1)
        return (-1)
    return (i);
}

int         first_line(char *file, int *fold)
{
    char        holder;
    int         i;

    i = 0;
    holder = 0;
    if ((*fold = open(file, O_RDONLY)) == -1)
        return (-1);
    while (read(*fold, &holder, 1) > 0 && holder != '\n')
        continue ;
    holder = 0;
    while (read(*fold, &holder, 1) > 0 && holder != '\n')
        i = i + 1;
    if ((close(*fold)) == -1)
        return (-1);
    if ((*fold = open(file, O_RDONLY)) == -1)
        return (-1);
    holder = 0;
    while (read(*fold, &holder, 1) > 0 && holder != '\n')
        continue ;
    return (i);
}
