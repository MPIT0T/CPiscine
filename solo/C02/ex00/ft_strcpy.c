/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:24:43 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/17 13:50:32 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	cpt;

	cpt = 0;
	while (src[cpt] != 0)
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	dest[cpt] = src[cpt];
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	source[3] = "ab";
	char	destination[3];

	ft_strcpy(destination, source);
	puts(destination);
	return (0);
}*/
