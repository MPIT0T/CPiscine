/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words_amount.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolsen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:35:14 by aolsen            #+#    #+#             */
/*   Updated: 2023/10/01 22:33:23 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "local.h"

int     ft_words_amount(char *str, char *charset)
{
	int     i;
	int     count;
	int     state;

	i = 0;
	count = 0;
	state = 0;
	while (str[i])
	{
		if (ft_contains(str[i], charset) == 1 && state == 1)
			state = 0;
		else if (ft_contains(str[i], charset) == 0 && state == 0)
		{
			state = 1;
			count++;
		}
		i++;
	}
	return (count);
}

