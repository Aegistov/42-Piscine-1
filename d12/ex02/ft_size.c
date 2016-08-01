/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 21:53:26 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/28 21:53:28 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_size(char *file)
{
	int		file1;
	int		size;
	char	buf[2];

	size = 0;
	file1 = open(file, O_RDONLY);
	while (read(file1, buf, 1))
		size++;
	close(file1);
	return (size);
}
