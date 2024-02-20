/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolsen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:09:52 by aolsen            #+#    #+#             */
/*   Updated: 2023/10/01 22:33:56 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "local.h"

char    *ft_power_creator(int size)
{
	char    *power;
	int     nsize;
	int     i;

	nsize = 3 * (size - 1) + 2;
	power = malloc(sizeof(char) * nsize);
	i = 0;
	while (i < nsize)
	{
		if (i == 0)
			power[i] = '1';
		else
			power[i] = '0';
		i++;
	}
	power[nsize - 1] = 0;
	return (power);
}

void    write_multiple(char *power, t_dict_entry *dict)
{
	int     i;

	i = 0;
	while (dict[i].numeric_str)
	{
		if (ft_strcmp(dict[i].numeric_str, power) == 0)
		{
			ft_putstr(dict[i].alpha_str);
			ft_putchar(' ');
			break ;
		}
		i++;
	}
}

void	ft_fill_tab(char **tab, int size, char *str)
{
	int	j;
	int	k;

	j = ft_strlen(str) - 1;
	while (size >= 0 && j >= 0)
	{
		k = 2;
		tab[size] = malloc(sizeof(char) * 4);
		while (k >= 0 && j >= 0)
		{
			tab[size][k] = str[j];
			//else 
			//tab[size][k] = '#';
			k--;
			j--;
		}
		while  (k >= 0)
		{
			tab[size][k] = '#';
			k--;
		}
		tab[size][3] = 0;
		size--;
	}
}

int	ft_getsize(char *str)
{
	int	size;

	size = ft_strlen(str);
	if (size % 3 == 0)
		size /= 3;
	else
		size = (size / 3) + 1;
	return (size);
}

char	**ft_substr(char *str, int size)
{
	char	**tab;

	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	ft_fill_tab(tab, size - 1, str);
	tab[size] = NULL;
	return (tab);
}
