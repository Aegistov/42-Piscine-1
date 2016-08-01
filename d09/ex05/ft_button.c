/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 23:08:02 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/21 23:08:03 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_button(int i, int j, int k)
{
	if (i > j && i > k)
	{
		if (j > k)
			return (j);
		else
			return (k);
	}
	if (k > j && k > i)
	{
		if (j > i)
			return (j);
		else
			return (i);
	}
	if (j > k && j > i)
	{	
		if (k > i)
			return (k);
		else 
			return (i);
	}
	return (0);
}

int		main()
{
	int i = 25;
	int j = 15;
	int k = 35;

	printf("%d\n", ft_button(i, j, k));
}	