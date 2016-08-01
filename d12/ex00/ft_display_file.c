/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 12:24:43 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/28 12:24:45 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_display_file(char *file)
{
	int		ex_file;
	int		length;
	char	buf[BUFF_SIZE + 1];

	if ((ex_file = open(file, O_RDONLY)) == -1)
		return (1);
	while ((length = read(ex_file, buf, BUFF_SIZE)) != 0)
	{
		buf[length] = '\0';
		ft_putstr(buf);
	}
	close(ex_file);
	return (0);
}
