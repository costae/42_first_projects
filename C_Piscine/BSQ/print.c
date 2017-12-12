/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 19:52:50 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/24 19:52:54 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	operate(int **temp, int *max, int *i)
{
	*(*(temp + 1)) = ft_min(*(*(temp + 0)), *(*(temp + 0) - 1),
			*(*(temp + 1) - 1)) + 1;
	if (*(*(temp + 1)) > *max)
	{
		*max = *(*(temp + 1));
		*(g_bound + 3) = *(i + 1);
		*(g_bound + 2) = *i;
		*(g_bound + 1) = *(g_bound + 3) - *max + 1;
		*(g_bound + 0) = *(g_bound + 2) - *max + 1;
	}
}

void	free_t(int ***t)
{
	free(**t);
	free(*(*t + 1));
	free(*t);
}

void	solve(int fd, char *s)
{
	int		**t;
	char	c;
	int		*temp[2];
	int		i[3];

	*(i + 2) = init(&t, temp, &c, i);
	while (c != '\n')
		read(fd, &c, 1);
	++(*(temp + 1));
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			swap_t(&t, temp, i);
		else
		{
			if (c == *s)
				operate(temp, &i[2], i);
			else
				*(*(temp + 1)) = 0;
			++(*(i + 1));
		}
		++(*(temp + 0));
		++(*(temp + 1));
	}
	free_t(&t);
}

void	print_map(int fd, char *s)
{
	int		i;
	int		j;
	char	c;

	c = 1;
	while (c != '\n')
		read(fd, &c, 1);
	i = 1;
	j = 1;
	while (read(fd, &c, 1))
		if (c == '\n')
		{
			j = 1;
			i++;
			ft_putchar('\n');
		}
		else
		{
			if ((i >= g_bound[0] && i <= g_bound[2]) &&
					(j >= g_bound[1] && j <= g_bound[3]))
				ft_putchar(*(s + 2));
			else
				ft_putchar(c);
			j++;
		}
}
