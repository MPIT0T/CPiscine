/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:41:03 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/29 13:27:22 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_errors(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base_unsigned(unsigned int nbr, char *base, unsigned int base_len)
{
	if (nbr < base_len)
		ft_putchar(base[nbr]);
	else
	{
		ft_putnbr_base_unsigned(nbr / base_len, base, base_len);
		ft_putchar(base[nbr % base_len]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len <= 1 || ft_check_errors(base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base_unsigned(nbr * -1, base, base_len);
	}
	else
		ft_putnbr_base_unsigned(nbr, base, base_len);
}

#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
