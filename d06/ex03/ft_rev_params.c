/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 22:55:27 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/20 22:55:42 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int num;
	int i;

	i = argc - 1;
	while (i > 0)
	{
		num = 0;
		while (argv[i][num])
		{
			ft_putchar(argv[i][num]);
			num++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
