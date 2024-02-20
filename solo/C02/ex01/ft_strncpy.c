/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:50:29 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/18 14:26:23 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cpt;

	cpt = 0;
	while (cpt < n && src[cpt] != 0)
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	dest[cpt] = 0;
	return (dest);
}

/*int	main(void)
{
	char str[4] = "LoL\0";
	char car[4];

	ft_strncpy(car, str, 2);
	puts(car);
	return (0);
}*/
