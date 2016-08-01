/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amilian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 23:26:49 by amilian           #+#    #+#             */
/*   Updated: 2016/07/24 23:26:50 by amilian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**set_grid_parameters(char **argv)
{
	int		i;
	int		j;
	char	**grid;

	grid = (char**)malloc(sizeof(char*) * 10);
	i = 0;
	while (i < 9)
	{
		j = 0;
		grid[i] = (char*)malloc(sizeof(char) * 10);
		while (j < 9)
		{
			grid[i][j] = argv[i + 1][j];
			j++;
		}
		grid[i][j] = '\0';
		i++;
	}
	grid[i] = 0;
	return (grid);
}

void	free_grid(char **grid)
{
	int i;

	i = 0;
	while (grid[i])
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
