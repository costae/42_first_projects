/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:24:06 by cmiron            #+#    #+#             */
/*   Updated: 2016/11/20 13:24:43 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	get_width(char **tab)
{
	int	i;
	int	j;
	int	pos[2];

	*pos = -1;
	*(pos + 1) = -1;
	j = -1;
	while (*pos == -1)
	{
		j++;
		i = -1;
		while (++i < 4)
			if (*(*(tab + i) + j) == 64 + g_count)
				*pos = j;
	}
	j = 4;
	while (*(pos + 1) == -1)
	{
		j--;
		i = -1;
		while (++i < 4)
			if (*(*(tab + i) + j) == 64 + g_count)
				*(pos + 1) = j;
	}
	(*(g_figures + g_count - 1))->width = (*(pos + 1) - *pos + 1);
}

void	get_height(char **tab)
{
	int i;
	int j;
	int pos[2];

	*pos = -1;
	*(pos + 1) = -1;
	i = -1;
	while (*pos == -1)
	{
		i++;
		j = -1;
		while (++j < 4)
			if (*(*(tab + i) + j) == 64 + g_count)
				*pos = i;
	}
	i = 4;
	while (*(pos + 1) == -1)
	{
		i--;
		j = -1;
		while (++j < 4)
			if (*(*(tab + i) + j) == 64 + g_count)
				*(pos + 1) = i;
	}
	(*(g_figures + g_count - 1))->height = (*(pos + 1) - *pos + 1);
}

int		get_next_elem(void)
{
	int i;

	i = 0;
	while (i < g_count)
	{
		if (!g_is_used[i])
			return (i);
		i++;
	}
	return (g_count);
}

int		get_size(int nr)
{
	G;
	return (r[nr]);
}
