/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:17:36 by mpitot            #+#    #+#             */
/*   Updated: 2023/10/05 16:33:38 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		k;
	int		j;
	char	*result;

	i = 0;
	while (str[i])
	{
		j = 0;
		k = i;
		while (str[k] == to_find[j] && to_find[j])
		{
			k++;
			j++;
		}
		if (to_find[j] == 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[12] = "hello world";
	char	to_find[] = "llo";

	printf("%s", ft_strstr(str, to_find));
	printf("\n%s", str);
	return (0);
}*/
