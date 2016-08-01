/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp2.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huspinat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 13:41:19 by huspinat          #+#    #+#             */
/*   Updated: 2016/07/31 18:49:43 by huspinat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPP2_H
# define FT_OPP2_H
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_link{
	char			str[200];
	struct s_link	*next;
}				t_link;

typedef struct	s_opp{
	char	*str;
	char	*(*rush)(int a, int b);
}				t_opp;

void			ft_putchar(char c);
void			ft_putnbr(int nbr);
char			*rush00(int a, int b);
char			*rush01(int a, int b);
char			*rush02(int a, int b);
char			*rush03(int a, int b);
char			*rush04(int a, int b);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
void			ft_xy(char *str, int *x, int *y);
char			ft_putstr(char *str);
void			ft_print(char *str, int x, int y);

#endif
