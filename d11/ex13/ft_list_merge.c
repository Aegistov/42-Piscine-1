/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 01:28:07 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/27 01:28:08 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*holder;

	if (*begin_list1 == 0)
	{
		begin_list1 = begin_list2;
		return ;
	}
	holder = *begin_list1;
	while (holder1->next)
	{
		holder = holder->next;
	}
	holder->next = begin_list2;
}
