/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 14:21:11 by mhurd             #+#    #+#             */
/*   Updated: 2016/07/31 18:51:04 by huspinat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_opp2.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *str, int x, int y)
{
	ft_putstr(str);
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

void	ft_xy(char *str, int *x, int *y)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] == '\n')
			*y = *y + 1;
	*x = i / *y - 1;
}
