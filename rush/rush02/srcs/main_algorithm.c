/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolsen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:01:54 by aolsen            #+#    #+#             */
/*   Updated: 2023/10/01 19:52:19 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "local.h"

void	ft_hundred(char *str, t_dict_entry *tab)
{
	int	i;
	char	nb;

	nb = str[0];
	str[0] = '#';
	i = 0;
	if (nb == '0')
		return ;
	while (tab[i].numeric_str)
	{
		if (nb == tab[i].numeric_str[0])
		{
			ft_putstr(tab[i].alpha_str);
			ft_putchar(' ');
			break;
		}
		i++;
	}
	i = 0;
	while (tab[i].numeric_str)
	{
		if (ft_strcmp(tab[i].numeric_str, "100") == 0)
		{
			ft_putstr(tab[i].alpha_str);
			ft_putchar(' ');
			break;
		}
		i++;
	}
}

void	ft_ten(char *str, t_dict_entry *tab)
{
	int	i;  
	char	nb[2];

	if (str[0] == '1')
	{
		nb[0] = '1';
		nb[1] = str[1];
		str[0] = '#';
		str[1] = '#';
	}
	else
	{
		nb[0] = str[0];
		nb[1] = '0';
		str[0] = '#';
		if (str[1] == '0')
			str[1] = '#';
	}
	i = 0;
	while (tab[i].numeric_str)
	{
		if (nb[0] == tab[i].numeric_str[0] && nb[1] == tab[i].numeric_str[1])
		{
			ft_putstr(tab[i].alpha_str);
			ft_putchar(' ');
			break;
		}
		i++;
	}
}

void	ft_units(char *str, t_dict_entry *tab)
{
	int     i;  
	char    nb; 

	nb = str[0];
	str[0] = '#';
	i = 0;
	while (tab[i].numeric_str)
	{
		if (nb == tab[i].numeric_str[0])
		{
			ft_putstr(tab[i].alpha_str);
			ft_putchar(' ');
			break;
		}
		i++;
	}
}

void	write_block(char *str, t_dict_entry *dict)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (str[i] != '#')
		{
			if (i == 0)
				ft_hundred(str, dict);
			else if (i == 1)
				ft_ten(&str[i], dict);
			else if (i == 2)
				ft_units(&str[i], dict);
		}
		i++;
	}
}

void	ft_print_all(char *str, t_dict_entry *dict)
{
	char	**tab;
	char	*power;
	int	size;
	int	i;
	int	status;

	size = ft_getsize(str);
	tab = ft_substr(str, size);
	i = 0;
	while (size > 0)
	{
		status = ft_strcmp(tab[i], "000");
		write_block(tab[i], dict);
		if (size > 1 && status != 0)
		{
			power = ft_power_creator(size);
			write_multiple(power, dict);
		}
		size--;
		i++;
	}
}
