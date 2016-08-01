/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huspinat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 14:10:40 by huspinat          #+#    #+#             */
/*   Updated: 2016/07/31 21:29:45 by huspinat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_opp2.h"
#include "rush02.h"

void	ft_convert(char *str, t_link *begin_list)
{
	int		i;
	int		c;
	t_link	*list;

	list = begin_list;
	c = 0;
	while (list)
	{
		i = -1;
		while (list->str[++i])
			str[i + c] = list->str[i];
		list = list->next;
		c += i;
	}
	str[c] = '\0';
	while (begin_list)
	{
		list = begin_list->next;
		free(begin_list);
		begin_list = list;
	}
}

t_link	*ft_create(char *str)
{
	int		i;
	t_link	*new;

	new = (t_link*)malloc(sizeof(t_link));
	i = 0;
	while (str[i] && new)
	{
		new->str[i] = str[i];
		i++;
	}
	new->str[i] = '\0';
	new->next = NULL;
	return (new);
}

t_link	*ft_push(char *str, t_link *buff)
{
	if (buff)
	{
		buff->next = ft_create(str);
		buff = buff->next;
	}
	else
		buff = ft_create(str);
	return (buff);
}

char	*ft_input(void)
{
	int		i;
	int		ret;
	t_link	*buff;
	t_link	*begin_list;
	char	*str;

	i = 0;
	buff = NULL;
	str = (char*)malloc(sizeof(char) * (101));
	while ((ret = read(0, str, 100)))
	{
		str[ret] = '\0';
		buff = ft_push(str, buff);
		if (i == 0)
			begin_list = buff;
		i += ret;
	}
	free(str);
	str = (char*)malloc(sizeof(char) * (i + 1));
	ft_convert(str, begin_list);
	return (str);
}

int		main(void)
{
	char	*input;
	int		i;
	int		x;
	int		y;
	int		d;

	i = -1;
	d = 0;
	input = ft_input();
	ft_xy(input, &x, &y);
	while (g_opptab[++i].str[0] && x && y)
	{
		if (ft_strcmp(input, g_opptab[i].rush(x, y)) == 0)
		{
			if (d)
				ft_putstr(" || ");
			ft_print(g_opptab[i].str, x, y);
			d++;
		}
	}
	if (!d)
		ft_putstr("aucune");
	ft_putchar('\n');
}
