/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:42:38 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/19 09:33:54 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_test(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (i == 0 || ft_test(str[i - 1]) == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		else if (i != 0)
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	str[37] = "lE chiE  est 12 metres joB a 42LyoOn";

	printf("Avant ft: %s", str);
	ft_strcapitalize(str);
	printf("\nApres ft: %s", str);
	return (0);

}
