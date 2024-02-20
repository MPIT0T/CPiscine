/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:18:55 by mpitot            #+#    #+#             */
/*   Updated: 2023/10/01 23:05:40 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "local.h"

t_raw_dict	ft_read_dict(const char *dict_path)
{
	int				fd;
	t_raw_dict		res;

	fd = open(dict_path, O_RDONLY);
	if (fd == -1)
	{
		res.size = 0;
		write(1, "Z", 1);
		return (res);
	}
	res.str = malloc(sizeof(char) * 1500);
	if (res.str == 0)
	{
		res.size = 0;
		write(1, "X", 1);
		return (res);
	}
	res.size = read(fd, res.str, 1500);
	close(fd);
	return (res);
}

int	ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_check_num(int n, char **split_dict)
{
	int		i;
	int		j;
	int		nbr;

	i = 0;
	while (split_dict[i] != 0)
	{
		j = 0;
		while (ft_is_digit(split_dict[i][j]) && split_dict[i][j])
			j++;
		if (j < 9)
		{
			nbr = ft_atoi(split_dict[i]);
			if (nbr == n)
				return (1);
		}
		i++;
	}
	return (0);
}

int	ft_check_twenty(char **split_dict)
{
	int	i;

	i = 0;
	while (i < 20)
	{
		if (!ft_check_num(i, split_dict))
			return (0);
		i++;
	}
	return (1);
}

void	ft_freesplit(char **split)
{
	int	i;

	i = -1;
	while (split[++i])
		free(split[i]);
}

int	ft_valdictrow(char *row)
{
	int	i;

	i = 0;
	if (!ft_is_digit(row[i]))
		return (0);
	while (ft_is_digit(row[i]))
		i++;
	while (row[i] == ' ')
		i++;
	if (row[i] != ':')
		return (0);
	while (row[i])
	{
		if (row[i] < 32 || row[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

int	ft_valdict(char *dict)
{
	int		i;
	char	**split_dict;

	split_dict = ft_split(dict, "\n");
	i = 0;
	while (split_dict[i] != 0)
	{
		if (!ft_valdictrow(split_dict[i]))
		{
			ft_freesplit(split_dict);
			free(split_dict);
			return (0);
		}
		i++;
	}
	if (!ft_check_twenty(split_dict))
	{
		ft_freesplit(split_dict);
		free(split_dict);
		return (0);
	}
	ft_freesplit(split_dict);
	free(split_dict);
	return (1);
}

char	*ft_remove_char(char c, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			j = i;
			while (str[j])
			{
				str[j] = str[j + 1];
				j++;
			}
			i--;
		}
		i++;
	}
	return (str);
}

int	ft_tablen(char **strs)
{
	int	l;

	l = 0;
	while (strs[l])
		l++;
	return (l);
}

char	*ft_process_raw_alpha_string(char *raw)
{
	char	*res;
	char	**split_raw;
	int		split_size;
	int		i;

	split_raw = ft_split(raw, " ");
	split_size = ft_tablen(split_raw);
	res = ft_strjoin(split_size, split_raw, " ");
	i = 0;
	while (i < split_size)
	{
		free(split_raw[split_size]);
		i++;
	}
	free(split_raw);
	return (res);
}

t_dict_entry	ft_row_to_entry(char *row)
{
	t_dict_entry	res;
	char			*raw_numeric_str;
	char			*raw_alpha_str;
	char			**split_row;

	split_row = ft_split(row, ":");
	raw_numeric_str = split_row[0];
	raw_alpha_str = split_row[1];
	res.numeric_str = ft_remove_char(' ', raw_numeric_str);
	res.alpha_str = ft_process_raw_alpha_string(raw_alpha_str);
	free(split_row);
	return (res);
}

t_dict_entry	*ft_dict_to_tab(char **split_dict)
{
	int				i;
	int				j;
	int				l;
	t_dict_entry	*tab;

	i = 0;
	j = 0;
	l = ft_tablen(split_dict);
	tab = malloc(sizeof(t_dict_entry) * l + sizeof((void *)0));
	if (tab == NULL)
		return (NULL);
	while (split_dict[i])
	{
		tab[i] = ft_row_to_entry(split_dict[i]);
		i++;
	}
	tab[i].numeric_str = NULL;
	return (tab);
}
