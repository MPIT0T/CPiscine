/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:51:33 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/14 21:21:22 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (j > i)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		j--;
		i++;
	}
}