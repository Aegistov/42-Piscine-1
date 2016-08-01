/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:44:57 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/21 18:44:59 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		time;

	time = hour;
	if (time >= 100 && time <= 2400)
		time = time / 100; 
	if (time >= 0 && time <= 24)
	{	
		if (time == 24)
			time = 0;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (time == 0)
			printf("12.00 A.M. AND 1.00 A.M.\n");
		else if (time < 11)
			printf("%d.00 A.M. AND %d.00 A.M.\n", time, time + 1);
		else if (time == 11)
			printf("11.00 A.M AND 12.00 P.M.\n");
		else if (time == 12)
			printf("12.00 P.M. AND 1.00 P.M.\n" );
		else if (time < 23)
			printf("%d.00 P.M and %d.00 P.M.\n",time % 12,(time + 1) % 12);
		else if (time == 23)
			printf("11.00 P.M. AND 12.00 A.M.\n");	
	}
	else
		printf("Please enter a valid 24 hour data format: 0 to 24 or 0000 to 2400");
}
