/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:29:20 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/19 14:56:51 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cpt;
	unsigned int	cptlen;

	cpt = 0;
	while (cpt < size && src[cpt] != 0)
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	dest[cpt] = 0;
	cptlen = 0;
	while (src[cptlen] != 0)
	{
		cptlen++;
	}
	return (cptlen);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[4] = "abc";
	char	car[4];
	int	i;
	
	i = ft_strlcpy(car, str, 4);
	printf("ce que retourne la fonction: %d\n", i);
	printf("chaine de caractere apres la ft: %s", car);

}*/
