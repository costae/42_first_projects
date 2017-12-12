/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 17:09:29 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/12 17:10:14 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		sep_size(char *sep)
{
	int i;

	i = -1;
	while (sep[++i] != 0)
		;
	return (i);
}

int		count(char **tab, int *size)
{
	int i;
	int cuv;
	int j;

	i = -1;
	*size = 0;
	cuv = 0;
	while (tab[++i] != NULL)
	{
		cuv++;
		j = -1;
		while (tab[i][++j] != 0)
			*size = *size + 1;
	}
	return (cuv);
}

char	*ft_join(char **tab, char *sep)
{
	int		i[8];
	char	*fin;
	int		cuv;

	i[5] = sep_size(sep);
	i[4] = count(tab, &i[3]);
	fin = (char*)malloc(sizeof(char) * (i[5] * (i[4] - 1) + i[3] + 1));
	i[0] = -1;
	i[7] = -1;
	cuv = 0;
	while (tab[++i[0]] != NULL && (++cuv))
	{
		i[1] = -1;
		while (tab[i[0]][++i[1]] != 0)
			*(fin + ++i[7]) = tab[i[0]][i[1]];
		if (cuv < i[4] && (i[6] = -1))
		{
			while (sep[++i[6]] != 0)
				*(fin + ++i[7]) = sep[i[6]];
		}
	}
	*(fin + ++i[7]) = 0;
	return (fin);
}
