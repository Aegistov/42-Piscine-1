/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:47:40 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/19 19:47:42 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int end;

	i = 0;
	end = 0;
	while (dest[end])
	{
		end++;
	}
	while (src[i])
	{
		if ((unsigned int)dest[end] < size - 1)
		{
			dest[end] = src[i];
		}
		end++;
		i++;
	}
	dest[end - 1] = '\0';
	return (end);
}
