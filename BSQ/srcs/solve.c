/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:42:22 by beroy             #+#    #+#             */
/*   Updated: 2023/10/04 19:16:25 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_square(t_map map, int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (map.grid[y + i])
	{
		j = 0;
		while (j < i)
		{
			if (map.grid[y + j][x + i] == map.obst
				|| map.grid[y + j][x + i] == 0)
				return (i);
			j++;
		}
		while (j >= 0)
		{
			if (map.grid[y + i][x + j] == map.obst
				|| map.grid[y + j][x + i] == 0)
				return (i);
			j--;
		}
		i++;
	}
	return (i);
}

t_map	ft_solve(t_map map)
{
	int	x;
	int	y;
	int	current;

	current = 0;
	y = -1;
	while (map.grid[++y + map.bsq.size])
	{
		x = 0;
		while (map.grid[y][x + map.bsq.size])
		{
			if (map.grid[y][x] != map.obst)
			{
				current = ft_square(map, x, y);
				if (current > map.bsq.size || current == 0)
				{
					map.bsq.size = current;
					map.bsq.x = x;
					map.bsq.y = y;
				}
			}
			x++;
		}
	}
	return (map);
}

t_map	ft_putsq(t_map map)
{
	int	i;
	int	j;

	if (map.bsq.size == 0)
		return (map);
	i = map.bsq.y;
	while (i < map.bsq.y + map.bsq.size)
	{
		j = map.bsq.x;
		while (j < map.bsq.x + map.bsq.size)
		{
			map.grid[i][j] = map.sq;
			j++;
		}
		i++;
	}
	return (map);
}
