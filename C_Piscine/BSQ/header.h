/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 19:52:23 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/24 19:52:27 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int		g_l[2];
int		g_bound[4];
int		read_data(char *s, int *fd);
char	check_line(char c, char *s, int *n);
char	check_repeat(char c, char *s);
char	check_last(int n, char c);
char	check_map(int n, char *s, int *fd);
char	check_s(char *s);
void	open_stdin(int *fd);
int		ft_min(int n1, int n2, int n3);
int		init(int ***t, int **temp, char *c, int *i);
void	swap_t(int ***t, int **temp, int *i);
void	operate(int **temp, int *max, int *i);
void	free_t(int ***t);
void	solve(int fd, char *s);
void	print_map(int fd, char *s);
void	argv_stdin(char *s);
void	argv_files(int ac, char **av, char *s);
void	ft_putchar(char c);
void	ft_putstr(char *s);
#endif
