/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <mpitot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:12:01 by mpitot            #+#    #+#             */
/*   Updated: 2023/10/04 20:35:45 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_bsq
{
	int	x;
	int	y;
	int	size;
}		t_bsq;

typedef struct s_map
{
	int		size;
	char	bg;
	char	obst;
	char	sq;
	char	**grid;
	t_bsq	bsq;

}		t_map;

t_map	ft_solve(t_map map);
t_map	ft_putsq(t_map map);
t_map	ft_create_map(char *str);

char	*ft_strdup(char *src);
char	*ft_strndup(char *src, int n);
char	*ft_read_file(const char *file_path);
char	**ft_split(char *str, char *charset, int sz);

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_free_tab(char **tab, int size, int quit);
void	ft_print_map(t_map map);

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
int		ft_check_malloc(char **tab, int size);
int		ft_square(t_map map, int x, int y);
int		ft_error(t_map map);
int		ft_init_argv(char *file_path);
int		ft_init_std(void);
int		ft_contains(char c, char *charset);

#endif
