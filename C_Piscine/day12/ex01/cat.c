/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 21:46:48 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/18 21:47:08 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		ft_error(char *c)
{
	int		i;

	i = -1;
	while (c[++i])
		write(2, &c[i], 1);
	write(2, "\n", 1);
	return (1);
}

int		ft_cat(int ac, char *av)
{
	int		file;
	int		ret;
	char	buf[1025];

	if (av[0] == '-' || ac == 1)
		file = 1;
	else
		file = open(av, O_RDONLY);
	if (file == -1)
		return (ft_error("open() failed"));
	while ((ret = read(file, buf, 1024)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	buf[ret] = '\0';
	if (close(file) == -1)
		return (ft_error("close() error"));
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 1)
		ft_cat(ac, av[0]);
	while (++i < ac)
		ft_cat(ac, av[i]);
	return (0);
}
