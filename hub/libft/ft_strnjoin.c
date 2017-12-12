/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 16:05:53 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/23 19:10:34 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnjoin(char *str1, char *str2, size_t length)
{
	char	*str3;

	str3 = NULL;
	if (str1 && str2)
	{
		str3 = ft_strnew(ft_strlen(str1) + length);
		if (str3)
		{
			ft_strcpy(str3, str1);
			ft_strncat(str3, str2, length);
		}
	}
	return (str3);
}
