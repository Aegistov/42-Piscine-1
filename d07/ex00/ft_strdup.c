/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 19:24:34 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/20 19:24:36 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		src_length;
	char	*new_str;

	i = 0;
	src_length = 0;
	while (src[src_length])
	{
		src_length++;
	}
	new_str = (char*)malloc(sizeof(*new_str) * (src_length));
	if (new_str == NULL)
	{
		return (NULL);
	}
	while (i < src_length)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[src_length] = '\0';
	return (new_str);
}
