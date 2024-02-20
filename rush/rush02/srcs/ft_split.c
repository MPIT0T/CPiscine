/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolsen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:37:19 by aolsen            #+#    #+#             */
/*   Updated: 2023/10/01 22:31:43 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "local.h"

char    **ft_split(char *str, char *charset)
{
	int             size;
	int             i;
	int             j;
	char    **tab;

	size = ft_words_amount(str, charset);
	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		tab[j] = ft_strndup(&str[i], ft_wordlen(&str[i], charset));
		i += ft_wordlen(&str[i], charset);
		if (tab[j][0] != 0)
			j++;
		i++;
	}
	tab[size] = 0;
	return (tab);
}

