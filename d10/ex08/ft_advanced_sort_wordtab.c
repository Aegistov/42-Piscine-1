/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 19:37:28 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/26 19:37:32 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **tab, int a, int b, int holder)
{
	tab[holder] = tab[a];
	tab[a] = tab[b];
	tab[b] = tab[holder];
	tab[holder] = NULL;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char*))
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
			if (cmp(tab[i], tab[j]) > 0)
			{
				ft_swap(tab, i, j, holder);
			}
			j--;
		}
		i--;
	}
}
