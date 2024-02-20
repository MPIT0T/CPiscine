/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:19:58 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/24 19:46:16 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

char	*ft_rm_spaces(char *src)
{
	int		i;
	int		j;
	char	*dst;

	dst = malloc(sizeof(char) * 17);
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (src[i])
	{
		if (src[i] != ' ')
		{
			dst[j] = src[i];
			j++;
		}
		i++;
	}
	return (dst);
}

int	**ft_clean_cond(char *str)
{
	int	i;
	int	j;
	int	k;
	int	**cond;

	cond = malloc(sizeof(int *) * 4);
	if (!cond)
		return (NULL);
	i = 0;
	k = 0;
	while (i < 4)
	{
		cond[i] = malloc(sizeof(int) * 4);
		if (!cond[i])
			return (NULL);
		j = 0;
		while (j < 4)
		{
			cond[i][j] = str[k] - 48;
			j++;
			k++;
		}
		i++;
	}
	return (cond);
}

int	**ft_init_board(void)
{
	int	i;
	int	j;
	int	**board;

	board = malloc(sizeof(int *) * 4);
	if (!board)
		return (NULL);
	i = 0;
	while (i < 4)
	{
		board[i] = malloc(sizeof(int) * 4);
		if (!board[i])
			return (NULL);
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	return (board);
}

void	ft_free_mem(int **tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
