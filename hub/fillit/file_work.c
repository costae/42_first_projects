/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_work.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:24:06 by cmiron            #+#    #+#             */
/*   Updated: 2016/11/20 13:24:27 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	file_work(char *name)
{
	int fd;

	if ((fd = open(name, O_RDONLY)) == -1)
		error();
	get_figures(fd);
}

void	get_figures(int fd)
{
	char	*temp;
	char	c;
	short	flag;

	initialize(&temp, &flag);
	while (1)
	{
		if ((read(fd, temp, 20)) != 20)
		{
			if (flag == 0)
				break ;
			else
				error();
		}
		else
		{
			flag = 1;
			g_count++;
			if (g_count > 26)
				error();
			check_pattern(temp);
		}
		check_last(&fd, &c, &flag);
	}
	free(temp);
}
