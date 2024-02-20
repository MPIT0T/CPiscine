/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_entry.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:01:27 by mpitot            #+#    #+#             */
/*   Updated: 2023/10/04 20:41:50 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *str, char *tab, int n)
{
	int		i;
	int		j;
	int		len;
	char	*dst;

	len = ft_strlen(str);
	dst = malloc(sizeof(char) * (len + n + 1));
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len + n)
	{
		if (i < len)
			dst[i] = str[i];
		else
		{
			dst[i] = tab[j];
			j++;
		}
		i++;
	}
	free(str);
	dst[i] = '\0';
	return (dst);
}

int	ft_end_input(char *str)
{
	int	len;

	len = ft_strlen(str);
	if (str[len - 1] == '\n' && str[len - 2] == '\n')
		return (1);
	return (0);
}

char	*ft_get_stdentry(void)
{
	int		i;
	int		sz;
	char	*str;
	char	tab[1024];

	i = 0;
	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	sz = 0;
	str[0] = '\0';
	while (i >= 0)
	{
		i = read(0, tab, 1023);
		str = ft_realloc(str, tab, i);
		if (!str)
			return (NULL);
		if (ft_end_input(str) == 1)
			break ;
	}
	return (str);
}

void	ft_print_map(t_map map)
{
	int	i;

	i = 0;
	while (i < map.size)
	{
		ft_putstr(map.grid[i]);
		ft_putchar('\n');
		i++;
	}
}

int	ft_init_std(void)
{
	t_map	map;
	char	*str;

	str = ft_get_stdentry();
	if (!str)
		exit(1);
	if (ft_strcmp(str, "map error\n") == 0)
		return (1);
	map = ft_create_map(str);
	if (!map.grid)
		return (1);
	if (ft_error(map) == 1)
	{
		ft_free_tab(map.grid, map.size, 0);
		return (1);
	}
	map = ft_solve(map);
	map = ft_putsq(map);
	ft_print_map(map);
	ft_free_tab(map.grid, map.size, 0);
	return (0);
}
