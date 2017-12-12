/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:24:06 by cmiron            #+#    #+#             */
/*   Updated: 2016/11/20 13:24:54 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "fillit.h"

void	ft_assign(int *count, int *row, int *col, t_list *lst)
{
	*count = 0;
	*row = find_row(lst) - 1;
	*col = find_col(lst);
}

int		ft_evaluate(char c1, char c2, int *count)
{
	if (c1 >= 'A' && c1 <= 'Z')
	{
		if (c2 >= 'A' && c2 <= 'Z')
			return (0);
		*count = *count + 1;
	}
	return (1);
}

int		can_put(t_list *lst, t_map *map, int x, int y)
{
	int col;
	int row;
	int tc;
	int ty;
	int count;

	ft_assign(&count, &row, &col, lst);
	while (++row < 4 && x < map->size)
	{
		tc = col - 1;
		ty = y - 1;
		while (++tc < 4 && ++ty < map->size)
		{
			if (!ft_evaluate(lst->elem[row][tc], map->map[x][ty], &count))
				return (0);
			if (count == 4)
				break ;
		}
		if (count == 4)
			break ;
		x++;
	}
	if (count < 4 || (x >= map->size && row < 4) || (tc < 4 && ty > map->size))
		return (0);
	return (1);
}

int		solve(t_list *root, t_map *map)
{
	int i;
	int j;

	if (root == NULL)
		return (1);
	i = 0;
	while (i < map->size)
	{
		j = 0;
		while (j < map->size)
		{
			if (can_put(root, map, i, j))
			{
				put_elem(root, map, i, j);
				if (solve(root->next, map))
					return (1);
				del_elem(root, map);
			}
			j++;
		}
		i++;
	}
	return (0);
}
