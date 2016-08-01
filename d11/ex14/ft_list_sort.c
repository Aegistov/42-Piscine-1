/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 01:34:17 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/27 01:34:20 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		change;
	t_list	*holder;
	void	*data_holder;

	change = 1;
	if (*begin_list == 0)
	{
		return ;
	}
	while (change)
	{
		change = 0;
		holder = *begin_list;
		while (holder->next)
		{
			if (cmp(tmp->data, tmp->next->data) > 0)
			{
				data_holder = holder->data;
				holder->data = holder->next->data;
				tmp->next->data = data_holder;
				change = 1;
			}
			holder = holder->next;
		}
	}
}
