/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolsen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:23:34 by aolsen            #+#    #+#             */
/*   Updated: 2023/10/01 22:38:09 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "local.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	
	char		**split_dict;
	t_raw_dict	raw_dict;
	t_dict_entry	*dict;
	if (argc != 2)
		return (1);
	raw_dict = ft_read_dict("numbers.dict");
	split_dict = ft_split(raw_dict.str, "\n");
	dict = ft_dict_to_tab(split_dict);
	ft_print_all(argv[1], dict);
}
