/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 16:06:52 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/23 16:07:03 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*tmp;

	tmp = (char *)s;
	len = ft_strlen((char *)s);
	while (len != 0 && tmp[len] != (char)c)
		len--;
	if (tmp[len] == (char)c)
		return (&tmp[len]);
	return (NULL);
}
