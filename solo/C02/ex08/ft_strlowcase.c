/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:29:11 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/17 19:18:46 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != 0)
	{
		if (str[cpt] >= 65 && str[cpt] <= 90)
		{
			str[cpt] += 32;
		}
		cpt++;
	}
	return (str);
}
/*
#include <stdio.h>
int     main(void)
{
	char    str[4] = "az";

	ft_strlowcase(str);
	printf("%s", str);
	return (0);
}
*/
