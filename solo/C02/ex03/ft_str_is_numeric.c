/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:36:34 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/16 20:50:09 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != 0)
	{
		if (str[cpt] < 48)
		{
			return (0);
		}
		else if (str[cpt] > 57)
		{
			return (0);
		}
		cpt++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	char	str[4] = "12a";

	printf("%d", ft_str_is_numeric(str));
}*/
