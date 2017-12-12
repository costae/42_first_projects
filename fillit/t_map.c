/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_map.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:24:06 by cmiron            #+#    #+#             */
/*   Updated: 2016/11/20 13:24:55 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

void	print_map(t_map *map)
{
	int i;
	int j;

	i = -1;
	while (++i < map->size)
	{
		j = -1;
		while (++j < map->size)
		{
			if (map->map[i][j] >= 'A' && map->map[i][j] <= 'Z')
				ft_putchar(map->map[i][j]);
			else
				ft_putchar('.');
		}
		ft_putchar('\n');
	}
}

t_map	*ft_map_cr(int size)
{
	t_map	*map_new;
	char	**darr;
	int		i;

	map_new = (t_map *)malloc(sizeof(t_map));
	map_new->size = size;
	darr = (char **)malloc(sizeof(char *) * size);
	i = -1;
	while (++i < size)
		darr[i] = (char *)malloc(sizeof(char) * size);
	map_new->map = darr;
	return (map_new);
}

void	free_map(t_map *map)
{
	int i;

	i = 0;
	while (i < map->size)
		free(map->map[i++]);
	free(map->map);
}

void	put_elem(t_list *elem, t_map *map, int x, int y)
{
	int col;
	int row;
	int rr;
	int temp;

	row = find_row(elem);
	col = find_col(elem);
	while (row < 4)
	{
		temp = col;
		rr = y;
		while (temp < 4)
		{
			if (elem->elem[row][temp] >= 'A' && elem->elem[row][temp] <= 'Z')
				map->map[x][rr] = elem->elem[row][temp];
			temp++;
			rr++;
		}
		row++;
		x++;
	}
}

void	del_elem(t_list *elem, t_map *map)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	c = find_char(elem);
	while (++i < map->size)
	{
		j = -1;
		while (++j < map->size)
			if (map->map[i][j] == c)
				map->map[i][j] = '.';
	}
}
