/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:24:10 by cmiron            #+#    #+#             */
/*   Updated: 2016/11/20 13:24:13 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define R r[]
# define G int R = {2,3,4,4,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,10,11};

typedef struct		s_list
{
	char			elem[4][4];
	struct s_list	*next;
}					t_list;

typedef struct		s_map
{
	int				size;
	char			**map;
}					t_map;
typedef struct		s_elem
{
	char			**tab;
	int				height;
	int				width;
}					t_elem;

int					g_k;
int					solve(t_list *root, t_map *map);
int					ft_next_sqrt(int nb);
t_map				*ft_map_cr(int size);
void				free_map(t_map *map);
void				print_map(t_map *map);
int					ft_strlen(char *str);
void				ft_putchar(char c);
int					find_col(t_list *elem);
int					find_row(t_list *elem);
void				print_map(t_map *map);
void				put_elem(t_list *elem, t_map *map, int x, int y);
void				del_elem(t_list *elem, t_map *map);
char				*ft_open(char *name);
void				ft_putstr(char *str);
char				*ft_sublstr(char *str, int l, size_t n);
void				ft_declare_first(int *i, int *h);
void				ft_declare_second(int *g_k, int *h);
char				find_char(t_list *elem);
void				ft_puterror(void);
int					g_count;
int					g_size;
int					*g_is_used;
t_elem				**g_figures;
void				umple(t_elem *pz, int cur, int i_beg, int j_beg);
void				sterge_elem(t_elem *pz, int cur);
void				init_pz(char ***pz, int size);
int					fill(t_elem *pz, int cur);
void				show_pz(char **pz, int size);
int					incape(t_elem *pz, int cur, int i_beg, int j_beg);
int					in_pz(int cur);
void				file_work(char *name);
void				get_figures(int fd);
void				get_width(char **tab);
void				get_height(char **tab);
int					get_next_elem(void);
int					get_size(int nr);
void				error(void);
void				cpy_column(char *temp, char **tab, int j);
void				shuffle_column();
void				cpy_line(char *temp, char *tab);
void				shuffle_line();
void				check_pattern(char *temp);
void				fill_tab_check(char *temp);
void				t_elem_realloc(int size);
void				valid_figure(char **tab_temp);
void				check_last(int *fd, char *c, short *flag);
void				initialize(char **temp, short *flag);
int					check_adjance(char **tab, int i, int j, short *flag);
void				check_neighb(int *neighb);
int					ft_maincheck(int a, char *b, char **str);
void				solveit(t_list **root, t_map **main_map, int *k);

#endif
