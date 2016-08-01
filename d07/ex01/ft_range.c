/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 13:26:46 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/21 13:26:52 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*num;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	num = (int*)malloc(sizeof(*num) * (max - min));
	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (num);
}
