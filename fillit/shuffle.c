/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shuffle.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:24:06 by cmiron            #+#    #+#             */
/*   Updated: 2016/11/20 13:24:51 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	cpy_column(char *temp, char **tab, int j)
{
	int v;
	int i;

	v = -1;
	i = -1;
	while (++v < 4)
	{
		*(temp + v) = *(*(tab + ++i) + j);
		*(*(tab + i) + j) = '.';
	}
}

void	shuffle_column(void)
{
	char	**tab;
	int		i[3];
	int		k;
	char	temp[4];

	tab = (*(g_figures + g_count - 1))->tab;
	i[1] = -1;
	k = 0;
	while (++i[1] < 4)
	{
		i[0] = -1;
		while (++i[0] < 4)
			if (*(*(tab + i[0]) + i[1]) == 64 + g_count)
			{
				cpy_column(temp, tab, i[1]);
				i[2] = -1;
				while (++i[2] < 4)
					*(*(tab + i[2]) + k) = temp[i[2]];
				k++;
				break ;
			}
	}
}

void	cpy_line(char *temp, char *tab)
{
	int i;

	i = -1;
	while (++i < 4)
	{
		*(temp + i) = *(tab + i);
		*(tab + i) = '.';
	}
}

void	shuffle_line(void)
{
	char	**tab;
	int		i[3];
	int		k;
	char	temp[4];

	tab = (*(g_figures + g_count - 1))->tab;
	i[0] = -1;
	k = 0;
	while (++i[0] < 4)
	{
		i[1] = -1;
		while (++i[1] < 4)
			if (*(*(tab + i[0]) + i[1]) == 64 + g_count)
			{
				cpy_line(temp, *(tab + i[0]));
				i[2] = -1;
				while (++i[2] < 4)
					*(*(tab + k) + i[2]) = temp[i[2]];
				k++;
				break ;
			}
	}
}
