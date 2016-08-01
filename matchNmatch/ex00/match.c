/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:19:02 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/24 21:19:04 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		match(char *s1, char *s2)
{
	if (!s1 && !s2)
		return (1);
	else if (s1 == s2 && s1 != '*')
		return (match((s1 + 1), (s2 + 1)));
	else if (s1 == '*' && s2 == '*')
		return (match((s1 + 1), s2));
	else if (s2 == '*' && !s1)
		return (match(s1, (s2 + 1)));
	else if (s2 == '*' && s2 && s1)
		return (match((s1 + 1), s2) || match(s1, (s2 + 1)));
	else
		return (0);
}

int 	main()
{
	char	str1[] = "hello";
	char 	str2[] = "*ell";

	printf("%d",match(str1, str2));
}