/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 18:48:32 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/11 21:13:35 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*check(long long *a)
{
	int *mem;

	if (a[1] < 0)
		a[4] = -a[0] + a[1];
	else
		a[4] = a[1] - a[0];
	mem = (int*)malloc(4 * a[4]);
	a[2] = a[0];
	a[3] = 0;
	return (mem);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	long long	a[5];

	a[0] = (long long)min;
	a[1] = (long long)max;
	if (min >= max)
	{
		*range = (void*)0;
		return (0);
	}
	*range = check(a);
	while (a[0] < a[1])
	{
		*(*range + a[3]) = a[0]++;
		a[3]++;
	}
	return (a[4]);
}
