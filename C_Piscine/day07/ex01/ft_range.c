/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 19:56:51 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/10 20:00:33 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *str;
	int a;

	if (min >= min)
		return (NULL);
	str = (int *)malloc(sizeof(*str) * (max - min));
	a = 0;
	while (min < max)
	{
		str[a] = min;
		a++;
		min++;
	}
	return (str);
}
