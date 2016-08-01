/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 06:09:57 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/22 17:09:17 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <string.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define OPEN 1
# define CLOSE 0
# define EXIT_SUCCESS 0

typedef int		t_ft_bool;

typedef struct	s_door
{
	int state;
}				t_door;

void			is_door_open(t_door *door);
void			is_door_close(t_door *door);
t_ft_bool		close_door(t_door *door);
t_ft_bool		open_door(t_door *door);
#endif
