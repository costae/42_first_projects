/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:39:59 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/23 18:37:19 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *a, const void *b, size_t n)
{
	char	*dest;
	char	*src;

	if (n == 0 || a == b)
		return (a);
	dest = (char *)a;
	src = (char *)b;
	while (--n)
		*dest++ = *src++;
	*dest = *src;
	return (a);
}
