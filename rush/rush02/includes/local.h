/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   local.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolsen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:50:03 by aolsen            #+#    #+#             */
/*   Updated: 2023/10/01 21:12:23 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOCAL_H
#define LOCAL_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_raw_dict
{
	unsigned int	size;
	char		*str;
}		t_raw_dict;

typedef struct	s_dict_entry
{
	char *numeric_str;
	char *alpha_str;
}		t_dict_entry;

int	ft_valarg(char *str);
int	ft_valdict(char *dict);
int	ft_valdictrow(char *row);
int	ft_valinput(int argc, char **argv);
int	ft_is_digit(char c);
int	ft_atoi(char *str);
int	ft_strslen(int size, char **strs);
int	ft_strlen(char *str);
int	ft_contains(char c, char *charset);
int	ft_strcmp(char *s1, char *s2);
int	ft_getsize(char *str);
int     ft_tablen(char **strs);
int     ft_check_num(int n, char **split_dict);
int     ft_check_twenty(char **split_dict);
int     ft_wordlen(char *str, char *charset);
int     ft_words_amount(char *str, char *charset);

t_dict_entry    *ft_dict_to_tab(char **split_dict);
t_dict_entry    ft_row_to_entry(char *row);
t_raw_dict	ft_read_dict(const char* dict_path);

void		ft_print_all(char *str, t_dict_entry *dict);
void		write_multiple(char *power, t_dict_entry *dict);
void		write_block(char *str, t_dict_entry *dict);
void		ft_freesplit(char **split);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_hundred(char *str, t_dict_entry *tab);
void		ft_ten(char *str, t_dict_entry *tab);
void		ft_units(char *str, t_dict_entry *tab);
void		ft_fill_tab(char **tab, int size, char *str);

char		*ft_strcat(char *dest, char *src);
char		*ft_strjoin(int size, char **strs, char *sep);
char		*ft_strndup(char *src, int n);
char		**ft_split(char *str, char *charset);
char		*ft_power_creator(int size);
char		*ft_remove_char(char c, char *str);
char		**ft_substr(char *str, int size);
char		*concat_everything(char *res, int size, char **strs, char *sep);
char		*ft_process_raw_alpha_string(char *raw);

#endif



