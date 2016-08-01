/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 22:02:02 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/28 22:02:04 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	positive(int index, char *buf, int tail, int file1)
{
	int length;

	while ((length = read(file1, buf, 1)) != 0)
	{
		if (index == tail - 1)
		{
			buf[length] = '\0';
			ft_putstr(buf);
		}
		else
			index++;
	}
}

void	negative(int size, char *buf, int tail, int file1)
{
	int		index;
	int		length;

	index = 0;
	while ((length = read(file1, buf, 1)) != 0)
	{
		if (index == size - tail)
		{
			buf[length] = '\0';
			ft_putstr(buf);
		}
		else
			index++;
	}
}

int		ft_tail(int sign, int size, int tail, char *file)
{
	char	buf[2];
	int		length;
	int		file1;
	int		index;

	index = 0;
	if ((file1 = open(file, O_RDONLY)) == -1)
		return (errno);
	if (sign == 1)
		positive(index, buf, tail, file1);
	else
	{
		if (size > tail)
			negative(size, buf, tail, file1);
		else
		{
			while ((length = read(file1, buf, 1)) != 0)
				write(1, &buf[0], 1);
		}
	}
	close(file1);
	return (0);
}
