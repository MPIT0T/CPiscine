/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolsen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:36:45 by aolsen            #+#    #+#             */
/*   Updated: 2023/10/01 22:32:56 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "local.h"

char    *ft_strndup(char *src, int n)
{
	int             i;
	char    *dst;

	i = 0;
	dst = malloc(sizeof(char) * (n + 1));
	if (!dst)
		return (NULL);
	while (i < n)
	{
	  dst[i] = src[i];
	  i++;
  }
	dst[i] = 0;
	return (dst);
}

