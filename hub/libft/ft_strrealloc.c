/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 16:07:40 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/23 16:07:54 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrealloc(char *str, int size)
{
	char		*new;
	int			i;

	size += ft_strlen(str) + 1;
	if ((new = (char *)malloc(size)))
		return (NULL);
	i = -1;
	while (str[++i])
		new[i] = str[i];
	free(str);
	new[i] = '\0';
	return (new);
}
