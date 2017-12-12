/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:55:52 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/26 18:08:50 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	void			*new;
	size_t			i;
	unsigned char	*tmp;

	new = malloc(size);
	tmp = (unsigned char *)new;
	i = 0;
	if (!new)
		return (NULL);
	else
	{
		while (i < size)
		{
			tmp[i] = 0;
			i++;
		}
	}
	new = (void *)tmp;
	return (new);
}
