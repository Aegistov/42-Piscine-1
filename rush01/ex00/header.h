/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amilian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 23:26:55 by amilian           #+#    #+#             */
/*   Updated: 2016/07/24 23:26:56 by amilian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

# define ERROR		"Error\n"
# define TRUE		1
# define FALSE		0
# define ENDL		"\n"
# define SPACE		" "
# define EMPTY		'.'
# define UNIQUE		"UNIQUE"

typedef int	t_bool;

void	print_grid(char **grid);
void	print_error(void);
char	**set_grid_parameters(char **argv);
t_bool	final_col_check(char **grid);
t_bool	final_row_check(char **grid);
t_bool	check_solution(char **grid);
t_bool	valid_guess(char **grid, int row, int col, char num);
t_bool	in_row(char **grid, int row, int col, char num);
t_bool	in_col(char **grid, int row, int col, char num);
t_bool	in_box(char **grid, int r_box, int c_box, char num);
t_bool	find_empty_square(char **grid, int *row, int *col);
t_bool	is_unique_solution(char **grid);
t_bool	sudoku(char **grid);
t_bool	error_check(int ac, char **av);
t_bool	valid_char(char c);

#endif
