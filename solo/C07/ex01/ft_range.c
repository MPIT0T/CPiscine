/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:55:37 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/29 11:54:28 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (tab);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*#include <stdio.h>
int main()
{
	int    *tab;
	int    i;
	int    x;
	int    y;

	x = 0;
	y = 100;
	tab = ft_range(x, y);
	y  = y - x ;
	if (y < 0)
		y = y * -1;
	i = 0;
	while (i != y )
	{
		printf("%d ", tab[i]);
		i++;
	}
	free(tab);
	return 0;
}*/
