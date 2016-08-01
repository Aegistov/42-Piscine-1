/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:23:08 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/20 15:23:10 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int num;

	i = 1;
	while (i < argc)
	{
		num = 0;
		while (argv[i][num])
		{
			ft_putchar(argv[i][num]);
			num++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
