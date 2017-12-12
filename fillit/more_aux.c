/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moreaux.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:24:06 by cmiron            #+#    #+#             */
/*   Updated: 2016/11/20 13:24:49 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_declare_first(int *i, int *h)
{
	*i = -1;
	*h = 0;
}

void	ft_declare_second(int *g_k, int *h)
{
	*g_k = *g_k + 1;
	*h = *h + 1;
}

void	ft_puterror(void)
{
	ft_putstr("error\n");
}

int		ft_countdiez(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '#')
			j++;
		i++;
	}
	return (j);
}

void	solveit(t_list **root, t_map **main_map, int *k)
{
	while (!solve(*root, *main_map))
	{
		free_map(*main_map);
		*main_map = ft_map_cr(++*k);
	}
	print_map(*main_map);
	free_map(*main_map);
}
