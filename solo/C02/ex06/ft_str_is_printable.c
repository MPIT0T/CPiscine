/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:55:13 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/17 12:59:28 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != 0)
	{
		if (str[cpt] < 32)
		{
			return (0);
		}
		else if (str[cpt] > 126)
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
	char    str[17] = "12a85928Wqiyqe82";

	printf("%d", ft_str_is_printable(str));
	return (0);
}*/
