/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 14:22:03 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/22 14:22:08 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int num;

	num = 0;
	while (value > 0)
	{
		if ((value & 1) == 1)
			num++;
		value >>= 1;
	}
	return (num);
}
