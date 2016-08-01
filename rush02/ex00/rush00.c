/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huspinat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 13:38:27 by huspinat          #+#    #+#             */
/*   Updated: 2016/07/31 21:27:10 by huspinat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define TL		'o'
#define TR		'o'
#define BL		'o'
#define BR		'o'
#define TOP		'-'
#define SIDE	'|'
#define CENTER	' '

int		ft_print_corner(int *xy, int width, int height, char *str)
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

char	*rush00(int a, int b)
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
			if (ft_print_corner(xy, a, b, str + i + 1))
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
