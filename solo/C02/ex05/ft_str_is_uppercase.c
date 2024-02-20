/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:44:12 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/17 12:58:37 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != 0)
	{
		if (str[cpt] < 65 || str[cpt] > 90)
		{
			return (0);
		}
		cpt++;
	}
	return (1);
}
/*
#include <stdio.h>
int     main(void)
{
	char    str[6] = "ALORS";

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
*/
