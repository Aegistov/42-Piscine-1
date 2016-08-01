/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 14:22:22 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/21 14:22:24 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(int argc. char **argv)
{
	int		i;
	int		j;
	int		size;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			size++;
			j++;
		}
		i++;
	}
	return (size);
}

char *ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int 	m;
	int		size;
	char	*string

	size = ft_size(argc, argv);
	string = (char*)malloc(sizeof(*string) * size + 1);
	i = 1;
	m = 0;
	while (i <argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[m++] = argv[i][j]
			j++;
		}
		if (i < argc - 1)
		{
			str[m++] = '\n';
		}
		i++;
	}
	string[m] = '\0';
	return (string);
}