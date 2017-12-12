/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:24:05 by cmiron            #+#    #+#             */
/*   Updated: 2016/11/20 13:24:22 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	check_pattern(char *temp)
{
	int i;
	int contor;

	contor = 0;
	i = -1;
	while (++i < 20)
	{
		if ((i + 1) % 5 == 0)
		{
			if (*(temp + i) != '\n')
				error();
		}
		else if (*(temp + i) != '.' && *(temp + i) != '#')
			error();
		if (*(temp + i) == '#')
		{
			contor++;
			*(temp + i) = 64 + g_count;
		}
	}
	if (contor != 4)
		error();
	fill_tab_check(temp);
}

void	fill_tab_check(char *temp)
{
	char	**tab_temp;
	int		i;
	int		j;
	int		k;

	tab_temp = (char**)malloc(sizeof(char*) * 4);
	i = -1;
	k = -1;
	while (++i < 4)
	{
		*(tab_temp + i) = (char*)malloc(sizeof(char) * 5);
		j = -1;
		while (++j < 5)
			*(*(tab_temp + i) + j) = *(temp + ++k);
	}
	valid_figure(tab_temp);
	t_elem_realloc(g_count);
	*(g_figures + g_count - 1) = (t_elem*)malloc(sizeof(t_elem));
	(*(g_figures + g_count - 1))->tab = tab_temp;
	get_height(tab_temp);
	get_width(tab_temp);
	shuffle_column();
	shuffle_line();
}

void	t_elem_realloc(int size)
{
	t_elem		**temp;
	int			i;

	temp = (t_elem**)malloc(sizeof(t_elem*) * size);
	if (g_figures != NULL)
	{
		i = -1;
		while (++i < g_count)
			*(temp + i) = *(g_figures + i);
		free(g_figures);
		g_figures = temp;
	}
	else
		g_figures = temp;
}

void	valid_figure(char **tab_temp)
{
	int		i;
	int		j;
	short	flag;
	int		neighb[4];
	int		v;

	i = -1;
	v = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (*(*(tab_temp + i) + j) == 64 + g_count)
			{
				flag = 0;
				neighb[++v] = check_adjance(tab_temp, i, j, &flag);
				if (!flag)
					error();
				check_neighb(neighb);
			}
		}
	}
}
