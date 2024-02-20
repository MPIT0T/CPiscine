/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:17:43 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/15 09:23:11 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_convert_and_print(int x, int y)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = x / 10 + 48;
	a2 = x % 10 + 48;
	b1 = y / 10 + 48;
	b2 = y % 10 + 48;
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_convert_and_print(x, y);
			y++;
		}
		x++;
		write(1, "98 99", 5);
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
