/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:48:23 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/24 18:54:46 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puterror(void)
{
	write(1, "Error\n", 6);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_error(int **board)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (board[i][j] == 0)
			{
				ft_puterror();
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putgrid(int **board)
{
	int	i;
	int	j;

	i = 0;
	if (ft_check_error(board) == 0)
		return ;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(board[i][j] + 48);
			if (j != 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
