/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 21:42:42 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/18 21:43:31 by cmiron           ###   ########.fr       */
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

int		main(int ac, char **av)
{
	int		file;
	int		ret;
	char	buf[11];

	if (ac == 1)
		return (ft_error("File name missing."));
	else if (ac > 2)
		return (ft_error("Too many arguments."));
	else
	{
		file = open(av[1], O_RDONLY);
		if (file == -1)
			return (ft_error("open() failed"));
		while ((ret = read(file, buf, 10)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		buf[ret] = '\0';
		if (close(file) == -1)
			return (ft_error("close() error"));
	}
	return (0);
}
