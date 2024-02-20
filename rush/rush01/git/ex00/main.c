/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassie <cassie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:47:13 by cassie            #+#    #+#             */
/*   Updated: 2023/09/24 19:55:05 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "allfunc.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		**cond;
	int		**board;
	char	*str;

	if (argc != 2 || ft_strlen(argv[1]) != 31)
	{
		ft_puterror();
		return (0);
	}
	str = ft_rm_spaces(argv[1]);
	cond = ft_clean_cond(str);
	free(str);
	board = ft_init_board();
	ft_brut_solve(board, cond, 0, 0);
	ft_putgrid(board);
	ft_free_mem(cond);
	ft_free_mem(board);
	return (0);
}
