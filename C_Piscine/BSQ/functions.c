/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 19:52:07 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/24 19:52:15 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}

void	swap_t(int ***t, int **temp, int *i)
{
	*temp = **t;
	**t = *(*t + 1);
	*(*t + 1) = *temp;
	*(temp + 0) = **t;
	*(temp + 1) = *(*t + 1);
	*(i + 1) = 1;
	*i = *i + 1;
}

int		init(int ***t, int **temp, char *c, int *i)
{
	*t = (int**)malloc(sizeof(int*) * 2);
	**t = (int*)malloc(sizeof(int) * *g_l);
	*(*t + 1) = (int*)malloc(sizeof(int) * *g_l);
	*temp = **t;
	while (*temp != **t + *g_l)
	{
		**temp = 0;
		++(*temp);
	}
	*(temp + 0) = **t;
	*(temp + 1) = *(*t + 1);
	*(*(temp + 1)) = 0;
	*c = 1;
	*i = 1;
	*(i + 1) = 1;
	return (0);
}

int		ft_min(int n1, int n2, int n3)
{
	if (n1 <= n2 && n1 <= n3)
		return (n1);
	else if (n2 <= n1 && n2 <= n3)
		return (n2);
	else
		return (n3);
}
