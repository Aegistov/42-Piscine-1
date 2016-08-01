/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huspinat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 22:36:07 by huspinat          #+#    #+#             */
/*   Updated: 2016/07/31 19:12:27 by huspinat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_opp2.h"

void	ft_putnbr(int nb)
{
	long		nb2;
	long long	i;

	i = 1;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	nb2 = nb;
	while (nb2 != 0)
	{
		nb2 /= 10;
		i *= 10;
	}
	i /= 10;
	while (i != 0)
	{
		ft_putchar(nb / i % 10 + 48);
		i /= 10;
	}
}
