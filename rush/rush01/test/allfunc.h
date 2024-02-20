/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allfunc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:08:00 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/24 18:55:13 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_brut_solve(int **board, int **cond, int i, int j);

int		**ft_clean_cond(char *str);

int		**ft_init_board(void);

int		ft_valid_board(int **board, int **cond);

int		ft_strlen(char *str);

char	*ft_rm_spaces(char *src);

void	ft_putgrid(int **board);

void	ft_puterror(void);

void	ft_free_mem(int **tab);
