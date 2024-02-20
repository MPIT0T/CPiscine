/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:34:50 by mpitot            #+#    #+#             */
/*   Updated: 2023/10/04 20:40:48 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words_amount(char *str, char *charset)
{
	int	i;
	int	count;
	int	state;

	i = 0;
	count = 0;
	state = 0;
	while (str[i])
	{
		if (ft_contains(str[i], charset) == 1 && state == 1)
			state = 0;
		else if (ft_contains(str[i], charset) == 0 && state == 0)
		{
			state = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (ft_contains(str[i], charset) == 0 && str[i])
		i++;
	return (i);
}

char	*ft_strndup(char *src, int n)
{
	int		i;
	char	*dst;

	i = 0;
	dst = malloc(sizeof(char) * (n + 1));
	if (!dst)
		return (NULL);
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

char	**ft_split(char *str, char *charset, int sz)
{
	int		size;
	int		j;
	char	**tab;

	size = ft_words_amount(str, charset);
	if (size != sz)
		return (NULL);
	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		exit(1);
	size = -1;
	j = 0;
	while (str[++size])
	{
		tab[j] = ft_strndup(&str[size], ft_wordlen(&str[size], charset));
		if (!tab[j])
			ft_free_tab(tab, size + 1, 1);
		size += ft_wordlen(&str[size], charset);
		if (tab[j][0] != 0)
			j++;
		else
			free(tab[j]);
	}
	tab[sz] = NULL;
	return (tab);
}
