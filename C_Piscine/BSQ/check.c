/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 19:51:48 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/24 19:53:32 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	check_line(char c, char *s, int *n)
{
	if ((c != *s && c != *(s + 1) && c != '\n') || c == *(s + 2))
		return (0);
	else if (c == '\n')
	{
		if (*(g_l + 1) != *g_l)
			return (0);
		*(g_l + 1) = 0;
		--(*n);
	}
	++(*(g_l + 1));
	return (1);
}

char	check_repeat(char c, char *s)
{
	if ((c != *s && c != *(s + 1) && c != '\n') || c == *(s + 2))
		return (0);
	return (1);
}

char	check_last(int n, char c)
{
	if (n)
		return (0);
	if (--(*(g_l + 1)) != 0)
		if (*(g_l + 1) != *g_l || c != 10)
			return (0);
	return (1);
}

char	check_map(int n, char *s, int *fd)
{
	char	c;

	c = 1;
	if (!read(*fd, &c, 1) || c == '\n')
		return (0);
	if (!check_repeat(c, s))
		return (0);
	*g_l = 0;
	while (c != '\n' && read(*fd, &c, 1))
	{
		if (!check_repeat(c, s))
			return (0);
		(*g_l)++;
	}
	(*g_l)++;
	*(g_l + 1) = 1;
	while (read(*fd, &c, 1))
		if (!check_line(c, s, &n))
			return (0);
	if (!check_last(n, c))
		return (0);
	return (1);
}

char	check_s(char *s)
{
	short i[2];

	*i = -1;
	while (++(*i) < 3)
	{
		*(i + 1) = *i;
		while (++(*(i + 1)) < 3)
			if (*(s + *i) == *(s + *(i + 1)))
				return (0);
	}
	return (1);
}
