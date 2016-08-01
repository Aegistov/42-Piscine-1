/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 20:31:03 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/30 20:31:05 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

double		parse_atoms(char **expr)
{
	double		nbr;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		nbr = parse_summands(expr);
		if (**expr == ')')
			(*expr)++;
		return (nbr);
	}
	return (ft_atoi(expr));
}

double		parse_factors(char **expr)
{
	double		num1;
	double		num2;
	char		operator;

	num1 = parse_atoms(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		operator = **expr;
		if (operator != '/' && operator != '*' && operator != '%')
			return (num1);
		(*expr)++;
		num2 = parse_atoms(expr);
		if (operator == '/')
			num1 /= num2;
		else if (operator == '*')
			num1 *= num2;
		else
			modulus(num1, num2);
	}
	return (num1);
}

double		parse_summands(char **expr)
{
	double		num1;
	double		num2;
	char		operator;

	num1 = parse_factors(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		operator = **expr;
		if (operator != '+' && operator != '-')
			return (num1);
		(*expr)++;
		num2 = parse_factors(expr);
		if (operator == '+')
			num1 += num2;
		else
			num1 -= num2;
	}
	return (num1);
}

int			modulus(double num1, double num2)
{
	int nbr1;
	int nbr2;

	nbr1 = num1;
	nbr2 = num2;
	return (nbr1 %= nbr2);
}

int			eval_expr(char *expr)
{
	return (parse_summands(&expr));
}
