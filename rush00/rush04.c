/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00_final_full.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 16:28:28 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/16 16:28:34 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int count;

	i = 1;
	while (i <= y)
	{
		count = 1;
		while (count <= x)
		{
			if (i != 1 && i != y && count != 1 && count != x)
				ft_putchar(' ');
			else if (count == 1 && i == 1)
				ft_putchar('A');
			else if ((count == x && i == 1) || (count == 1 && i == y))
				ft_putchar('C');
			else if (count == x && i == y)
				ft_putchar('A');
			else if ((count > 1 && i <= y) || (i == 1 || i == y)
				|| (count == 1 || count == x) || (i > 1 || i < y))
				ft_putchar('B');
			count++;
		}
		ft_putchar('\n');
		i++;
	}
}
