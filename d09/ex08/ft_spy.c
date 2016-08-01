/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 01:51:58 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/22 01:52:00 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		ft_message(char *str)
{
	char	*attack;
	char	*powers;
	char	*president;

	attack = "attack";
	powers = "powers";
	president = "president";
	if (ft_strcmp(str, attack) == 0 || ft_strcmp(str, powers) == 0
		|| ft_strcmp(str, president) == 0)
	{
		ft_putstr("Alert!!!\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	str[750];

	i = 0;
	while (++i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				str[k] = argv[i][j];
				k++;
			}
			j++;
		}
		str[j] = '\0';
		ft_strlowcase(str);
		if (ft_message(str) == 0)
			return (0);
	}
	return (0);
}
