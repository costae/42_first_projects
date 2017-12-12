/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:24:05 by cmiron            #+#    #+#             */
/*   Updated: 2016/11/20 13:24:25 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	check_last(int *fd, char *c, short *flag)
{
	if (read(*fd, c, 1))
		*flag = 1;
	else
		*flag = 0;
	if (*c != '\n' && *flag)
		error();
}

void	initialize(char **temp, short *flag)
{
	*temp = (char*)malloc(sizeof(char) * 20);
	*flag = 1;
	g_count = 0;
	g_figures = NULL;
}

int		check_adjance(char **tab, int i, int j, short *flag)
{
	int c;

	c = 0;
	if (i - 1 >= 0)
		if (*(*(tab + i - 1) + j) == 64 + g_count)
			c++;
	if (j - 1 >= 0)
		if (*(*(tab + i) + j - 1) == 64 + g_count)
			c++;
	if (i + 1 < 4)
		if (*(*(tab + i + 1) + j) == 64 + g_count)
			c++;
	if (j + 1 < 4)
		if (*(*(tab + i) + j + 1) == 64 + g_count)
			c++;
	if (c)
		*flag = 1;
	return (c);
}

void	check_neighb(int *neighb)
{
	int		i;
	short	flag;

	flag = 0;
	i = -1;
	while (++i < 4)
	{
		if (*(neighb + i) > 1)
			flag = 1;
	}
	if (!flag)
		error();
}
