/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 18:33:17 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/28 18:33:18 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	file_name(int i, char *file)
{
	if (i > 3)
		ft_putstr("\n==> ");
	else
		ft_putstr("==> ");
	ft_putstr(file);
	ft_putstr(" <==\n");
}

int		is_numeric(char *num)
{
	int		i;

	i = 0;
	if (num[i] == '+' || num[i] == '-')
		i++;
	while (num[i] != '\0' && num[i] >= '0' && num[i] <= '9')
		i++;
	if (num[i] == '\0')
		return (1);
	else
		return (-1);
}

int		number(char **argv)
{
	int		tail;

	if (is_numeric(argv[2]) == 1)
	{
		tail = ft_atoi(argv[2]);
		if (tail < 0)
			return (-tail);
		else
			return (tail);
	}
	else
	{
		ft_putstr("tail: illegal offset -- ");
		ft_putstr(argv[2]);
		ft_putstr("\n");
		return (-1);
	}
}

void	ft_error(char *name, char *file, int num)
{
	if (num != 0)
	{
		ft_putstr(name);
		ft_putstr("tail: ");
		ft_putstr(file);
		ft_putstr(": ");
		if (num == ENOENT)
			ft_putstr("No such file or directory\n");
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		size;
	int		tail;
	int		sign;

	sign = 0;
	i = 3;
	if (argc < 4)
		return (1);
	tail = number(argv);
	if (tail == -1)
		return (1);
	if (argv[2][0] == '+')
		sign = 1;
	while (i < argc)
	{
		if (argc > 4)
			file_name(i, argv[i]);
		size = ft_size(argv[i]);
		ft_error(argv[0], argv[1], ft_tail(sign, tail, size, argv[i]));
		i++;
	}
	return (0);
}
