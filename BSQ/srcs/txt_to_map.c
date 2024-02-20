/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   txt_to_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <mpitot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:33:03 by mpitot            #+#    #+#             */
/*   Updated: 2023/10/04 20:38:07 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_file_size(const char *file_path)
{
	int		fd;
	int		sz;
	int		count;
	char	tmp[1024];

	fd = open(file_path, O_RDONLY);
	if (fd <= 0)
		return (-1);
	sz = 1;
	count = 0;
	while (sz > 0)
	{
		sz = read(fd, tmp, 1023);
		count += sz;
	}
	close(fd);
	return (count);
}

char	*ft_read_file(const char *file_path)
{
	int		fd;
	int		sz;
	int		size;
	char	*str;

	size = ft_get_file_size(file_path);
	if (size == -1)
		return ("map error\n");
	fd = open(file_path, O_RDONLY);
	if (fd <= 0)
		return ("map error\n");
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	sz = read(fd, str, size);
	str[size] = 0;
	close(fd);
	return (str);
}

t_map	ft_map_first_row(char *str)
{
	int		len;
	t_map	map;

	len = ft_strlen(str);
	map.size = ft_atoi(str);
	map.sq = str[len - 1];
	map.obst = str[len - 2];
	map.bg = str[len - 3];
	map.bsq.size = 0;
	map.bsq.x = 0;
	map.bsq.y = 0;
	return (map);
}

t_map	ft_create_map(char *str)
{
	t_map	map;
	int		i;
	char	*first_row;

	i = 0;
	while (str[i] != '\n')
		i++;
	first_row = ft_strndup(str, i);
	map = ft_map_first_row(first_row);
	free(first_row);
	map.grid = ft_split(&str[i], "\n", map.size);
	free(str);
	return (map);
}

int	ft_init_argv(char *file_path)
{
	t_map	map;
	char	*str;

	str = ft_read_file(file_path);
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
