/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 22:01:19 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/23 22:01:22 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_word_count(char *str)
{
	int	count;
	int	i;
	int	prev;

	i = 0;
	count = 0;
	prev = 0;
	while (str[i])
	{
		if ((str[i] == '\n' || str[i] == ' ' || str[i] == '\t') && prev == 1)
			prev = 0;
		if ((str[i] != '\n' && str[i] != ' ' && str[i] != '\t') && prev == 0)
		{
			prev = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int		ft_word_location(int i, char *str)
{
	while (str[i])
	{
		if (str[i] != '\n' && str[i] != ' ' && str[i] != '\t')
			return (i);
		i++;
	}
	return (i);
}

int		ft_length(int i, char *str)
{
	int	start;

	start = i;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i - start);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	int		str_size;
	char	**chstr;

	i = 0;
	k = 0;
	chstr = (char**)malloc(sizeof(char*) * (ft_word_count(str) + 1));
	while (i < ft_word_count(str))
	{
		j = 0;
		k = ft_word_location(k, str);
		str_size = ft_length(k, str);
		chstr[i] = (char*)malloc(sizeof(char) * (str_size + 1));
		while (j < str_size)
			chstr[i][j++] = str[k++];
		chstr[i][j] = '\0';
		i++;
	}
	chstr[ft_word_count(str)] = 0;
	return (chstr);
}

int main(void)
{
	int n = 0;
	int i = 0;
	char a[] = "  My  \n name  is   Josh \t C";
	char **b = ft_split_whitespaces(a);
	while (b[n] != 0)
	{
		i = 0;
		while (b[n][i] != '\0')
		{
			printf("%c", b[n][i]);
			i++;
		}
		printf("%c", '\n');
		n++;
	}
	free(b);
	return (0);
}
