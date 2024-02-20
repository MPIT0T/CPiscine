/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolsen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:33:36 by aolsen            #+#    #+#             */
/*   Updated: 2023/10/01 22:48:05 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "local.h"

char    *ft_strjoin(int size, char **strs, char *sep)
{
	int             str_size;
	int             sep_size;
	char    *res;

	if (size == 0)
	{
		res = malloc(sizeof(char) * 1);
		if (res == 0)
			return (0);
		res[0] = '\0';
		return (res);
	}
	str_size = (sizeof(char) * ft_strslen(size, strs) + 1);
	sep_size = (sizeof(char) * (ft_strlen(sep) * (size - 1)));
	res = malloc(str_size + sep_size);
	if (!res)
		return (0);
	concat_everything(res, size, strs, sep);
	return (res);
}
