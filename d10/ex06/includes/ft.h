/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 13:52:07 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/26 13:52:09 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_add(int num1, int num2);
void			ft_minus(int num1, int num2);
void			ft_mult(int num1, int num2);
void			ft_div(int num1, int num2);
void			ft_mod(int	num1, int num2);

typedef struct	s_op
{
	int		num1;
	int		num2;
}				t_op;

#endif
