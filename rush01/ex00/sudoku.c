/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amilian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 23:27:07 by amilian           #+#    #+#             */
/*   Updated: 2016/07/24 23:27:08 by amilian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_bool	find_empty_square(char **grid, int *row, int *col)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grid[i][j] == EMPTY)
			{
				*row = i;
				*col = j;
				return (TRUE);
			}
			j++;
		}
		i++;
	}
	return (FALSE);
}

t_bool	is_unique_solution(char **grid)
{
	if (grid[9] == UNIQUE)
	{
		grid[9] = ERROR;
		return (TRUE);
	}
	else
	{
		grid[9] = UNIQUE;
		return (FALSE);
	}
}

t_bool	sudoku(char **grid)
{
	int		row;
	int		col;
	char	num;

	if (grid[9] == ERROR)
		return (TRUE);
	if (!find_empty_square(grid, &row, &col))
		return (is_unique_solution(grid));
	num = '1';
	while (num <= '9')
	{
		if (valid_guess(grid, row, col, num))
		{
			grid[row][col] = num;
			if (sudoku(grid))
				return (TRUE);
			grid[row][col] = EMPTY;
		}
		num++;
	}
	return (FALSE);
}
