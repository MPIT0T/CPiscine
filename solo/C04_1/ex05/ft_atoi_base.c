/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:45:50 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/29 14:29:20 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_checker(char c, char *base)
{
	if (ft_get_index(c, base) != -1)
		return (1);
	if (c == '+' || c == '-')
		return (2);
	if ((c >= 9 && c <= 13) || c == 32)
		return (3);
	return (0);
}


int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	value;
	int	base_len;

	i = 0;
	sign = 1;
	value = 0;
	base_len = ft_strlen(base);
	while(ft_checker(str[i], base) == 3)
		i++;
	while (ft_checker(str[i], base) == 2)
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (ft_checker(str[i], base) == 1)
	{
		value *= base_len;
		value += ft_get_index(str[i], base);
		i++;
	}
	return (value * sign);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("%d", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
