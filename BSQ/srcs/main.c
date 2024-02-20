/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:27:36 by mpitot            #+#    #+#             */
/*   Updated: 2023/10/04 19:37:43 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	int	i;
	int	state;

	if (argc < 2)
	{
		state = ft_init_std();
		if (state == 1)
			ft_putstr("map error\n");
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			state = ft_init_argv(argv[i]);
			if (state == 1)
				ft_putstr("map error\n");
			if (argc > 2)
				ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
