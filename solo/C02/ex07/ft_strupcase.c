/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:11:02 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/17 13:00:34 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != 0)
	{
		if (str[cpt] >= 97 && str[cpt] <= 122)
		{
			str[cpt] -= 32;
		}
		cpt++;
	}
	return (str);
}
/*
#include <stdio.h>
int 	main(void)
{
	char	str[4] = "AZ";

	ft_strupcase(str);
	printf("%s", str);
	return (0);
}*/
