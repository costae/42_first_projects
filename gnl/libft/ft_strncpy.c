/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:54:05 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/20 15:55:07 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*str;

	str = dest;
	while (n > 0 && *src != '\0')
	{
		*str = *src;
		str++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*str = '\0';
		str++;
		n--;
	}
	return (dest);
}
