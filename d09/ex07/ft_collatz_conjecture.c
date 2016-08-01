/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 01:31:08 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/22 01:31:10 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int i = 1;

	i = 1;
	if (base > 1)
	{
		if (base % 2 == 0)
			i += ft_collatz_conjecture(base / 2);
		else 
			i += ft_collatz_conjecture(base * 3 + 1);
	}
	return (i);
}

int main()
{
	printf("%d\n", ft_collatz_conjecture(6));
}