/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 19:53:05 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/24 19:53:12 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		read_data(char *s, int *fd)
{
	int		i;
	char	c;
	char	*t;
	int		temp;

	t = (char*)malloc(sizeof(char) * 15);
	c = -1;
	i = -1;
	while (c != '\n' && read(*fd, &c, 1))
		*(t + ++i) = c;
	c = 3;
	temp = i - 1;
	while (--i > temp - 3)
		*(s + (int)--c) = *(t + i);
	*(t + 1 + i) = 0;
	i = atoi(t);
	free(t);
	return (i);
}

void	open_stdin(int *fd)
{
	char c;

	*fd = open("new777.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	while (read(0, &c, 1))
		write(*fd, &c, 1);
	close(*fd);
	*fd = open("new777.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
}

void	argv_stdin(char *s)
{
	int fd;
	int n;

	open_stdin(&fd);
	n = read_data(s, &fd);
	if (!check_s(s) || !check_map(n - 1, s, &fd))
	{
		ft_putstr("map error\n");
		return ;
	}
	close(fd);
	fd = open("new777.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	solve(fd, s);
	close(fd);
	fd = open("new777.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	print_map(fd, s);
	close(fd);
	fd = (open("new777.txt", O_TRUNC));
	close(fd);
}

void	argv_files(int ac, char **av, char *s)
{
	short	i;
	int		n;
	int		fd;

	i = 0;
	while (++i < ac)
	{
		if ((fd = open(*(av + i), O_RDONLY)) < 0)
		{
			ft_putstr("map error\n");
			continue ;
		}
		n = read_data(s, &fd);
		if (!check_s(s) || !check_map(n - 1, s, &fd))
		{
			ft_putstr("map error\n");
			continue ;
		}
		close(fd);
		fd = open(*(av + i), O_RDONLY);
		solve(fd, s);
		close(fd);
		fd = open(*(av + i), O_RDONLY);
		print_map(fd, s);
	}
}
