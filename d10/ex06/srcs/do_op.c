/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 10:13:25 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/26 10:13:26 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft.h"

void	ft_organize(t_op data, char *opertor)
{
	void	(*arr[5])(int, int);

	arr[0] = &ft_add;
	arr[1] = &ft_minus;
	arr[2] = &ft_mult;
	arr[3] = &ft_div;
	arr[4] = &ft_mod;
	if (opertor[0] == '+')
		arr[0](data.num1, data.num2);
	if (opertor[0] == '-')
		arr[1](data.num1, data.num2);
	if (opertor[0] == '*')
		arr[2](data.num1, data.num2);
	if (opertor[0] == '/')
		arr[3](data.num1, data.num2);
	if (opertor[0] == '%')
		arr[4](data.num1, data.num2);
}

void	ft_do_op(char *num1, char *opertor, char *num2)
{
	t_op	data;

	data.num1 = ft_atoi(num1);
	data.num2 = ft_atoi(num2);
	if (opertor[1] != '\0' || (opertor[0] != '+' && opertor[0] != '-'
		&& opertor[0] != '*' && opertor[0] != '/' && opertor[0] != '%'))
		write(1, "0\n", 2);
	else if (opertor[0] == '/' && data.num2 == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (opertor[0] == '%' && data.num2 == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
		ft_organize(data, opertor);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		ft_do_op(argv[1], argv[2], argv[3]);
	else
		return (0);
}
