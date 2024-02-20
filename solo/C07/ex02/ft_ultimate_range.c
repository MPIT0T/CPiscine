/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:52:01 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/29 09:31:27 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (size);
}
/*
#include <stdio.h>
int main(void)
{
	int	**ptr;

	ptr = malloc(sizeof(int *) * 2);
	for (int i = 0; i < ft_ultimate_range(ptr, -25, 25); i++)
		printf("%d\n", ptr[0][i]);
	return 0;
}*/
