/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wortab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 13:48:37 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/26 13:48:38 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **tab, int a, int b, int holder)
{
	tab[holder] = tab[a];
	tab[a] = tab[b];
	tab[b] = tab[holder];
	tab[holder] = NULL;
}

void	ft_sort_wortab(char **tab)
{
	int		i;
	int		j;
	int		holder;

	i = 0;
	j = 0;
	while (tab[i] != NULL)
		i++;
	holder = i;
	i--;
	while (i > 0)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				ft_swap(tab, i, j, holder);
			}
			j--;
		}
		i--;
	}
}
