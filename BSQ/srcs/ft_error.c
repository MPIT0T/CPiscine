/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:15:11 by beroy             #+#    #+#             */
/*   Updated: 2023/10/04 20:30:50 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	content_check(char *str, char obst, char bg)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != obst && str[i] != bg)
			return (1);
		i++;
	}
	return (0);
}

int	ft_gridcheck(t_map map)
{
	int	i;
	int	lenref;

	write(1, "A", 1);
	lenref = ft_strlen(map.grid[0]);
	if (lenref == -1)
		return (1);
	write(1, "B", 1);
	i = 0;
	while (map.grid[i])
	{
		if (lenref != ft_strlen(map.grid[i]))
			return (1);
		if (content_check(map.grid[i], map.obst, map.bg) == 1)
			return (1);
		i++;
	}
	if (i != map.size)
		return (1);
	return (0);
}

int	ft_parsecheck(t_map map)
{
	if (map.size == 0 || (!map.size))
		return (1);
	if ((!map.sq) || (!map.obst) || (!map.bg))
		return (1);
	return (0);
}

int	ft_strlenlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_error(t_map map)
{
	if (ft_strlenlen(map.grid) != map.size)
		return (1);
	if (ft_parsecheck(map) == 1)
		return (1);
	if (ft_gridcheck(map) == 1)
		return (1);
	return (0);
}
