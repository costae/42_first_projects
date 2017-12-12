/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 13:00:15 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/16 13:02:32 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *arr;

	if (length <= 0)
		return (0);
	if ((arr = (int*)malloc(sizeof(int) * length)))
	{
		i = 0;
		while (i < length)
		{
			arr[i] = f(tab[i]);
			i++;
		}
		return (arr);
	}
	else
		return (0);
}
