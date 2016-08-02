#include "ft_header.h"

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

void        ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void        ft_putnbr(int nbr)
{
    if (nbr >= 10)
        ft_putstr(nbr / 10);
    ft_putchar((nbr % 10) + '0');
}

int         ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
