/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 00:11:02 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/27 00:11:03 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;

	if (*begin_list)
	{
		while ((*begin_list)->next)
		{
			list = *begin_list;
			*begin_list = (*begin_list)->next;
			free(list);
		}
	}
	*begin_list = NULL;
}
