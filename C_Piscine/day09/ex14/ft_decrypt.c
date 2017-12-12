/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:57:20 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/12 17:03:38 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"
#include <stdlib.h>

int		ft_getcount(char *str)
{
	int i;
	int count;

	count = 0;
	i = -1;
	while (str[++i] != 0)
		if (str[i] == '|')
			count++;
	return (count);
}

int		ft_atoi(char *str)
{
	int i;
	int nr;
	int n;

	i = 0;
	nr = 0;
	n = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == ' ') ||
			(str[i] == '\f') || (str[i] == '\v') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		n = 1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nr *= 10;
		nr += (int)str[i] - '0';
		i++;
	}
	if (n == 1)
		return (-nr);
	else
		return (nr);
}

int		get_size(char *str)
{
	int i;

	i = 0;
	while (str[i] != ';' && str[i] != 0)
		i++;
	return (i);
}

t_perso	**ft_decrypt(char *str)
{
	t_perso	**pers;
	int		i[4];

	i[3] = ft_getcount(str);
	pers = (t_perso**)malloc(sizeof(t_perso*) * (i[3] + 1));
	i[0] = -1;
	i[1] = -1;
	while (++i[0] < i[3])
	{
		pers[i[0]] = malloc(sizeof(t_perso));
		pers[i[0]]->age = ft_atoi(&str[++i[1]]);
		while (str[++i[1]] != '|')
			pers[i[0]]->name = malloc(sizeof(char) *
				((get_size(str + ++i[1])) + 1));
		i[2] = -1;
		while (str[i[1]] != 0 && str[i[1]] != ';')
		{
			pers[i[0]]->name[++i[2]] = str[i[1]];
			i[1]++;
		}
		pers[i[0]]->name[++i[2]] = 0;
	}
	pers[i[0]] = NULL;
	return (pers);
}
