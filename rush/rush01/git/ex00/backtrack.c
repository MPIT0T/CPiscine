/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:37:02 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/24 19:19:23 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "allfunc.h"

int	ft_valid_col(int **board, int value, int i, int j)
{
	int	k;
	int	l;

	k = 0;
	l = 0;
	while (k < 3)
	{
		if (l == i)
			l++;
		if (board[l][j] == value)
			return (0);
		l++;
		k++;
	}
	return (1);
}

int	ft_valid_line(int **board, int value, int i, int j)
{
	int	k;
	int	l;

	k = 0;
	l = 0;
	while (k < 3)
	{
		if (l == j)
			l++;
		if (board[i][l] == value)
			return (0);
		l++;
		k++;
	}
	return (1);
}

int	ft_valid_placement(int **board, int i, int j)
{
	int	value;

	value = board[i][j];
	if (ft_valid_col(board, value, i, j) == 0)
		return (0);
	if (ft_valid_line(board, value, i, j) == 0)
		return (0);
	return (1);
}

int	ft_brut_solve(int **board, int **cond, int i, int j)
{
	int	value;

	if (j > 3)
	{
		j = 0;
		i++;
	}
	if (i > 3)
	{
		if (ft_valid_board(board, cond) == 1)
			return (1);
		return (0);
	}
	value = 0;
	while (++value <= 4)
	{
		board[i][j] = value;
		if (ft_valid_placement(board, i, j) == 1)
		{
			if (ft_brut_solve(board, cond, i, j + 1) == 1)
				return (1);
		}
		board[i][j] = 0;
	}
	return (0);
}
