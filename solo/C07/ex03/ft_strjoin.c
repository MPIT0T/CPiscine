/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:51:55 by mpitot            #+#    #+#             */
/*   Updated: 2023/10/04 13:40:48 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != 0)
	{
		j++;
	}
	while (src[i] != 0)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		strsize;
	char	*str;

	i = 0;
	strsize = 0;
	while (i < size - 1)
		strsize += ft_strlen(strs[i++]) + ft_strlen(sep);
	strsize += ft_strlen(strs[i]);
	str = malloc(sizeof(char) * (strsize + 1));
	if (!str || size == 0)
		return (str);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i++ != size - 1)
			ft_strcat(str, sep);
	}
	str[strsize] = 0;
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char **tab;
	int size = 3;

	tab = malloc(sizeof(char *) * size);
	tab[0] = malloc(sizeof(char) * 1 + 1);
	tab[1] = malloc(sizeof(char) * 2 + 1);
	tab[2] = malloc(sizeof(char) * 3 + 1);
	tab[0] = "a";
	tab[1] = "ab";
	tab[2] = "abc";
	printf("%s",ft_strjoin(size, tab, "\\"));
	return (0);
}*/
