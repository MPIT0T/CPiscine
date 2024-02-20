/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:18:36 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/17 12:56:33 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != 0)
	{
		if (str[cpt] < 65)
		{
			return (0);
		}
		else if (str[cpt] > 122)
		{
			return (0);
		}
		else if (str[cpt] > 90 && str[cpt] < 97)
		{
			return (0);
		}
		cpt++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[1] = "";

	printf("%d", ft_str_is_alpha(str));
}*/
