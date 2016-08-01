/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 14:08:12 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/21 14:08:15 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*num;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	num = (int*)malloc(sizeof(*num) * (max - min));
	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	*range = num;
	return (i);
}
