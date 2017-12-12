/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 12:03:07 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/13 17:38:45 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

short	is_ok(char c)
{
	if (c && c != '\t' && c != '\n' && c != ' ')
		return (1);
	else
		return (0);
}

int		get_count(char *str)
{
	int i;
	int count;

	i = -1;
	count = 0;
	while (str[++i])
		if (is_ok(str[i]) && (i ? !is_ok(str[i - 1]) : 1))
			++count;
	return (count);
}

int		get_size(char *str, int i)
{
	int size;

	size = 0;
	while (is_ok(str[i]))
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i[4];

	i[3] = get_count(str);
	tab = malloc(sizeof(char*) * (i[3] + 1));
	i[0] = -1;
	i[1] = 0;
	while (++i[0] < i[3])
	{
		i[2] = -1;
		while (!is_ok(str[i[1]]))
			++i[1];
		tab[i[0]] = malloc(sizeof(char) * get_size(str, i[1]));
		while (is_ok(str[i[1]]))
		{
			tab[i[0]][++i[2]] = str[i[1]];
			i[1]++;
		}
		tab[i[0]][++i[2]] = '\0';
	}
	tab[i[0]] = NULL;
	return (tab);
}
