/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:34:13 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/20 15:35:08 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	unsigned char	x;

	i = 0;
	x = (unsigned char)c;
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str1[i] == x)
			return ((void *)&str1[i + 1]);
		i++;
	}
	return (NULL);
}
