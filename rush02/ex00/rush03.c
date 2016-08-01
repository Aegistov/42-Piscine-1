/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huspinat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 13:48:17 by huspinat          #+#    #+#             */
/*   Updated: 2016/07/31 21:28:15 by huspinat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define TL		'A'
#define TR		'C'
#define BL		'A'
#define BR		'C'
#define TOP		'B'
#define SIDE	'B'
#define CENTER	' '

int		ft_print_corner03(int *xy, int width, int height, char *str)
{
	if (xy[1] == 1 && xy[0] == 1)
		str[0] = TL;
	else if (xy[1] == width && xy[0] == 1)
		str[0] = TR;
	else if (xy[1] == 1 && xy[0] == height)
		str[0] = BL;
	else if (xy[1] == width && xy[0] == height)
		str[0] = BR;
	else
		return (0);
	return (1);
}

char	*rush03(int a, int b)
{
	int		xy[2];
	char	*str;
	int		i;

	i = -1;
	str = (char*)malloc(sizeof(char) * ((a + 1) * (b + 1)));
	xy[1] = 0;
	xy[0] = 0;
	while (xy[0]++ < b)
	{
		while (xy[1]++ < a)
		{
			if (ft_print_corner03(xy, a, b, str + i + 1))
				i++;
			else if (xy[0] == 1 || xy[0] == b)
				str[++i] = TOP;
			else if (xy[1] == 1 || xy[1] == a)
				str[++i] = SIDE;
			else
				str[++i] = CENTER;
		}
		str[++i] = '\n';
		xy[1] = 0;
	}
	return (str);
}
