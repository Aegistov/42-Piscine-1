/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 09:48:03 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/14 09:52:35 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb(void)
{
  int num[3] = {'0','1','2'};

  while (num[0] <= '7') 
    {
      while (num[1] <= '8') 
	{
	  while (num[2] <= '9') 
	    {
	      if(num[0] != num[1] || num[1] != num[2] || num[0] != num[2]) 
		{
		  ft_putchar(num[0]);
		  ft_putchar(num[1]);
		  ft_putchar(num[2]);
		  if(num[0] == '7' && num[1] == '8' && num[2] == '9')
		    {}
		  else 
		    {
		      ft_putchar(',');
		      ft_putchar(' ');
		    }
		}
	      num[2]++;
	    }
	  num[2] = num[1] + 2;
	  num[1]++;
	}
      num[1] = num[0] +1;
      num[0]++;
    }
}
