/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:24:06 by cmiron            #+#    #+#             */
/*   Updated: 2016/11/20 13:24:47 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		find_col(t_list *elem)
{
	int i;
	int j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (elem->elem[i][j] != '.')
				return (j);
			i++;
		}
		j++;
	}
	return (4);
}

int		find_row(t_list *elem)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (elem->elem[i][j] != '.')
				return (i);
			j++;
		}
		i++;
	}
	return (4);
}

t_list	*ft_create_elem(char *buf, char c)
{
	int		i;
	int		j;
	int		h;
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	ft_declare_first(&i, &h);
	while (++i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (buf[h] == '#')
				new->elem[i][j++] = c;
			else
				new->elem[i][j++] = buf[h];
			ft_declare_second(&g_k, &h);
		}
		ft_declare_second(&g_k, &h);
	}
	g_k++;
	new->next = NULL;
	return (new);
}

void	ft_list_cr(t_list **begin_list, char *buf, int c)
{
	t_list	*r;

	r = *begin_list;
	if (r != NULL)
	{
		while (r->next != NULL)
			r = r->next;
		r->next = ft_create_elem(buf, c);
	}
	else
		*begin_list = ft_create_elem(buf, c);
}

int		main(int ac, char **av)
{
	char	*str;
	char	c;
	int		k;
	t_list	*root;
	t_map	*main_map;

	g_k = 0;
	if (ac != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	file_work(*(av + 1));
	if ((str = ft_open(av[1])) == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	c = 'A';
	while (g_k < ft_strlen(str))
		ft_list_cr(&root, ft_sublstr(str, g_k, 20), c++);
	k = ft_next_sqrt(g_k * 4 / 21);
	main_map = ft_map_cr(k);
	solveit(&root, &main_map, &k);
	return (0);
}
