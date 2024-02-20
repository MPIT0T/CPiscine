/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:51:05 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/17 12:57:32 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != 0)
	{
		if (str[cpt] < 97)
		{
			return (0);
		}
		else if (str[cpt] > 122)
		{
			return (0);
		}
		cpt++;
	}
	return (1);
}
/*#include <stdio.h>

  int     main(void)
  {
  char    str[4] = "12a";

  printf("%d", ft_str_is_numeric(str));
  }*/
