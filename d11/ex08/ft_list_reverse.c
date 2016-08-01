/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 00:23:04 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/27 00:23:05 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*holder1;
	t_list	*holder2;

	list = *begin_list;
	if (!list || !(list->next))
	{
		return ;
	}
	holder1 = list->next;
	holder2 = holder1->next;
	list->next = 0;
	holder1->next = list;
	while (holder2)
	{
		list = holder1;
		holder1 = holder2;
		holder2 = holder2->next;
		holder1->next = list;
	}
	*begin_list = holder1;
}
