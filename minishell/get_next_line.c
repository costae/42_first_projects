/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 14:12:38 by cmiron            #+#    #+#             */
/*   Updated: 2016/12/13 14:12:43 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini.h"

int		get_next_line(const int fd, char **line)
{
	int				bol;
	int				res;
	char			temp[2];

	res = read(-400, temp, BUFF_SIZE);
	bol = 0;
	if (fd < 0 || line == NULL)
		return (-1);
	*line = ft_strnew(1);
	while ((res = read(fd, temp, 1)) > 0)
	{
		bol = 1;
		if (temp[0] == '\n')
			return (-1);
		*line = ft_strjoin(*line, temp);
	}
	if (res < 0)
		return (-1);
	return (bol);
}
