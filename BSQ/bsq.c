#include "ft_header.h"

char    g_vide;
char    g_obs;
char    g_plein;

int         check_nbr_lines(char *str)
{
    int     i;

    i = 0;
    while (str[i] && str[i + 3] && str[i] >= '0' && str[i] <= '9' && i < 100)
        i++;
    if (!(str[i] && str[i +1] && str[i +2]))
        return (map_error());
    g_vide = str[i];
    g_obs = str[i + 1];
    g_plein = str[i + 2];
    str[i] = '\0';
    return (0);
}

void        print_line(char *holder, t_max *max, int nbr_columns)
{
    int     i;

    i = 1;
    write(1, &holder[0], max->x_max - max->size);
    while (i++ <= max->size)
        write(1, &g_plein, 1);
    i = max->x_max;
    write(1, &holder[i], nbr_columns - i);
}

int         start_first_line(int fold, unsigned int *first, char *holder,
            t_max *max)
{
    int     i;
    int     max_size;

    i = 0;
    max_size = max->size;
    while (read(fold, &holder[i], 1) > 0 && holder[i] != '\n')
    {
        first[i] = 0;
        if (holder[i] == g_vide)
        {
            first[i] = 1;
            if (max_size <= 0)
                max_size = store_max(max, i, 1, 1)
        }
        else if (holder[i] != g_obs)
            return (map_error());
        i = i + 1;
    }
    if (holder[i] == 0)
        return (map_error());
    return (0);
}

int     init_first_char(char *holder, unsigned int *ptr2, t_max *max, int line)
{
    ptr2[0] = 0;
    if (holder[0] == g_vide)
        ptr2[0] = 1;
    else if (holder[0] != g_obs && holder[0] != '\n')
        return (map_error());
    if (max->size <= 0 && ptr2[0] == 1)
        max->size = store_max(max, 0, line, ptr2[0]);
    return (0);
}

int     put_int_tab(char *holder, unsigned int *ptr1,
            unsigned int *ptr2, t_max *max)
{
    static int      line;
    unsigned int    max_size;
    unsigned int    i;

    i = 1;
    ((max->new)++ == 1) ? (line = 2) : (0);
    if ((init_first_car(tmp, ptr2, max, line)) != 0)
        return (-1);
    max_size = max->size;
    while (holder[i] != '\n')
    {
        ptr2[i] = 0;
        if (holder[i] == g_vide)
        {
            ptr2[i] = find_minimum(ptr2[i - 1], ptr1[i - 1], ptr1[i]) + 1;
            if (ptr2[i] > max_size)
                max_size = store_max(max, i, line, ptr2[i]);
        }
        else if (holder[i] != g_obs)
            return (map_error());
        ++i;
    }
    ++line;
    return (0);
}
