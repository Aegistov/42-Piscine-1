/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 01:10:05 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/27 01:10:06 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_remove_list(t_list **holder1, t_list **holder2)
{
	(*holder2)->next = (*holder1)->next;
	free(*holder1);
	(*holder1) = (*holder2)->next;
}

void	ft_remove_list_start(t_list **holder, void *data_ref, int (cmp)())
{
	t_list	*holder1;
	t_list	*holde2;

	holder1 = *holder;
	while (holder1 && cmp(holder1->data, data_ref) == 0)
	{
		holder2 = holder1->next;
		free(holder1);
		holder1 = holder2;
	}
	*holder = holder1;
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (cmp)())
{
	t_list	*holder1;
	t_list	*holder2;

	if (*begin_list)
	{
		ft_remove_list_start(begin_list, data_ref, cmp);
		if (*begin_list)
		{
			holder1 = *begin_list;
			holde2 = holder1;
			holder1 = holder1->next;
			while (holder1)
			{
				if (cmp(holder1->data, data_ref) == 0)
					ft_remove_list(&holder1, &holder2);
				else
				{
					holder2 = holder1;
					holder1 = holder1->next;
				}
			}
		}
	}
}
