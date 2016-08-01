/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_guess.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amilian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 23:27:14 by amilian           #+#    #+#             */
/*   Updated: 2016/07/24 23:27:15 by amilian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_bool	in_box(char **grid, int r_box, int c_box, char num)
{
	int row;
	int col;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 3)
		{
			if (grid[row + (3 * r_box)][col + (3 * c_box)] == num)
				return (TRUE);
			col++;
		}
		row++;
	}
	return (FALSE);
}

t_bool	in_col(char **grid, int row, int col, char num)
{
	row = 0;
	while (row < 9)
	{
		if (grid[row][col] == num)
			return (TRUE);
		row++;
	}
	return (FALSE);
}

t_bool	in_row(char **grid, int row, int col, char num)
{
	col = 0;
	while (col < 9)
	{
		if (grid[row][col] == num)
			return (TRUE);
		col++;
	}
	return (FALSE);
}

t_bool	valid_guess(char **grid, int row, int col, char num)
{
	if (!in_row(grid, row, col, num) && !in_col(grid, row, col, num)
		&& !in_box(grid, (row / 3), (col / 3), num))
		return (TRUE);
	return (FALSE);
}
