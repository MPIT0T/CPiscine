/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:44:58 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/22 13:26:37 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != 0)
	{
		j++;
	}
	while (i < nb && src[i] != 0)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	src[7] = " world";
	char	dest[12] = "hello";

	ft_strncat(dest, src, 7);
	printf("%s", dest);
	return (0);
}*/
