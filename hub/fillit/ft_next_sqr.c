/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_sqr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:24:06 by cmiron            #+#    #+#             */
/*   Updated: 2016/11/20 13:24:29 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_next_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	while (result < nb)
	{
		if (result == nb)
			return (result);
		result = i * i;
		i++;
	}
	if (result == nb)
		return (i - 1);
	return (ft_next_sqrt(nb + 1));
}

char	*ft_sublstr(char *str, int l, size_t n)
{
	char	*res;
	int		i;

	i = 0;
	res = (char *)malloc(n + 1);
	while (l--)
		str++;
	while (n--)
		res[i++] = *str++;
	res[i] = 0;
	return (res);
}
