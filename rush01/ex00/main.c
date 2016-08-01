/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amilian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 23:27:01 by amilian           #+#    #+#             */
/*   Updated: 2016/07/24 23:27:02 by amilian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_grid(char **grid)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &grid[i][j], 1);
			if (j + 1 < 9)
				write(1, SPACE, 1);
			j++;
		}
		write(1, ENDL, 1);
		i++;
	}
}

void	print_error(void)
{
	write(1, ERROR, 6);
}

int		main(int argc, char **argv)
{
	char **grid;

	if (error_check(argc, argv))
	{
		print_error();
		return (0);
	}
	grid = set_grid_parameters(argv);
	if (grid == NULL)
		print_error();
	sudoku(grid);
	if (grid[9] == ERROR)
		print_error();
	else
	{
		grid[9] = UNIQUE;
		if (sudoku(grid) && check_solution(grid))
			print_grid(grid);
		else
			print_error();
	}
	free(grid);
	return (0);
}
