/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 20:22:56 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/30 20:22:57 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <unistd.h>

void		ft_putchar(char c);
void		ft_putnbr(long nbr);
int			ft_atoi(char **str);
int			eval_expr(char *expr);
double		parse_factors(char **expr);
double		parse_summands(char **expr);
double		parse_atoms(char **expr);
int			modulus(double num1, double num2);

#endif
