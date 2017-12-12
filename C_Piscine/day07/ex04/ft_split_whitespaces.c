/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 18:59:59 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/11 20:02:53 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#Include <stdlib.h>

int		get_count(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		i++;
	while (str[i] != 0)
	{
		while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i] != 0)
			i++;
		i++;
		count = count + 1;
	}
	return (count);
}

int		get_size(char *s, int i)
{
	int size;

	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i++;
	size = 0;
	while (s[i] != '\t' && s[i] != '\n'
			&& s[i] != ' ' && s[i] != 0)
	{
		size++;
		i++;
	}
	return (size + 1);
}

char	**ft_split_whitespaces(char *str)
{
	int		count;
	char	**tab;
	char	*cuv;
	int		i[2];
	int		j;

	count = get_count(str);
	tab = malloc(sizeof(cuv) * (count + 1));
	i[0] = -1;
	i[1] = -1;
	while (++i[0] < count)
	{
		j = -1;
		*(tab + i[0]) = malloc(sizeof(char) * get_size(str, ++i[1]));
		while (str[i[1]] != '\t' && str[i[1]] != '\n'
				&& str[i[1]] != ' ' && str[i[1]] != 0)
		{
			*(*(tab + i[0]) + ++j) = str[i[1]];
			i[1]++;
		}
		*(*(tab + i[0]) + ++j) = 0;
	}
	*(tab + i[0]) = NULL;
	return (tab);
}
