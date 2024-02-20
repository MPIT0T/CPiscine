/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:47:16 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/21 08:44:21 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checker(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c == '+' || c == '-')
		return (2);
	if ((c >= 9 && c <= 13) || c == 32)
		return (3);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	value;

	i = 0;
	sign = 1;
	value = 0;
	while (ft_checker(str[i]) == 3)
	{
		i++;
	}
	while (ft_checker(str[i]) == 2)
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_checker(str[i]) == 1)
	{
		value = value * 10;
		value = value + str[i] - 48;
		i++;
	}
	return (value * sign);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%d", ft_atoi(argv[1]));
	return (0);
}*/
