/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:24:05 by cmiron            #+#    #+#             */
/*   Updated: 2016/11/20 13:24:17 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	find_char(t_list *elem)
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			if (elem->elem[i][j] >= 'A' && elem->elem[i][j] <= 'Z')
				return (elem->elem[i][j]);
	}
	return ('.');
}

char	*ft_open(char *name)
{
	int		fd;
	int		ret;
	char	*buf;

	buf = (char *)malloc((sizeof(char) * 1000));
	fd = open(name, O_RDONLY);
	ret = read(fd, buf, 1000);
	if (!ret)
		return (0);
	buf[ret] = '\0';
	if (close(fd) == -1)
		return (NULL);
	return (buf);
}
