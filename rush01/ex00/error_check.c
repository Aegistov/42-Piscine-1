/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amilian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 23:26:41 by amilian           #+#    #+#             */
/*   Updated: 2016/07/24 23:26:44 by amilian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_bool	error_check(int ac, char **av)
{
	int i;
	int j;

	if (ac != 10)
		return (TRUE);
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!valid_char(av[i][j]))
				return (TRUE);
			j++;
		}
		if (j != 9)
			return (TRUE);
		i++;
	}
	return (FALSE);
}

t_bool	valid_char(char c)
{
	if (!(c >= '1' && c <= '9') && c != '.')
		return (FALSE);
	return (TRUE);
}

t_bool	check_solution(char **grid)
{
	if (final_row_check(grid) && final_col_check(grid))
		return (TRUE);
	return (FALSE);
}

t_bool	final_row_check(char **grid)
{
	int i;
	int j;
	int nb;
	int xb;

	nb = 0;
	xb = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			nb += grid[i][j];
		}
		if (nb != 45)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

t_bool	final_col_check(char **grid)
{
	int i;
	int j;
	int nb;

	nb = 0;
	j = 0;
	while (j < 9)
	{
		i = 0;
		while (i < 9)
		{
			nb += grid[i][j];
		}
		if (nb != 45)
			return (FALSE);
		j++;
	}
	return (TRUE);
}
