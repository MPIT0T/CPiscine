/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:32:30 by lmarando          #+#    #+#             */
/*   Updated: 2023/09/24 18:27:35 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "allfunc.h"

int	ft_right(int **board, int i)
{
	int	j;
	int	count;
	int	x;

	j = 3;
	count = 1;
	x = board[i][j];
	while (j > 0)
	{
		if (x < board[i][j - 1])
		{
			count++;
			x = board[i][j - 1];
		}
		j--;
	}
	return (count);
}

int	ft_left(int **board, int i)
{
	int	j;
	int	count;
	int	x;

	j = 0;
	count = 1;
	x = board[i][j];
	while (j < 3)
	{
		if (x < board[i][j + 1])
		{
			count++;
			x = board[i][j + 1];
		}
		j++;
	}
	return (count);
}

int	ft_bot(int **board, int j)
{
	int	i;
	int	count;
	int	x;

	i = 3;
	count = 1;
	x = board[i][j];
	while (i > 0)
	{
		if (x < board[i - 1][j])
		{
			count++;
			x = board[i - 1][j];
		}
		i--;
	}
	return (count);
}

int	ft_top(int **board, int j)
{
	int	i;
	int	count;
	int	x;

	i = 0;
	count = 1;
	x = board[i][j];
	while (i < 3)
	{
		if (x < board[i + 1][j])
		{
			count++;
			x = board[i + 1][j];
		}
		i++;
	}
	return (count);
}

int	ft_valid_board(int **board, int **cond)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (i == 0 && ft_top(board, j) != cond[i][j])
				return (0);
			if (i == 1 && ft_bot(board, j) != cond[i][j])
				return (0);
			if (i == 2 && ft_left(board, j) != cond[i][j])
				return (0);
			if (i == 3 && ft_right(board, j) != cond[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
