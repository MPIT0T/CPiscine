/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_things.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:10:20 by mpitot            #+#    #+#             */
/*   Updated: 2023/10/03 20:54:22 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_tab(char **tab, int size, int quit)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	if (quit == 1)
	{
		ft_putstr("Memory allocation error.\n");
		ft_putstr("Freed all the allocated memory.\n");
		ft_putstr("Quitting the program..\n");
		exit(1);
	}
}

int	ft_check_malloc_tab(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!tab[i])
		{
			ft_free_tab(tab, i + 1, 0);
			return (1);
		}
		i++;
	}
	return (0);
}
