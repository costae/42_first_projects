/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:57:41 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/23 18:35:10 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	i = 0;
	new = NULL;
	new = (char *)malloc(sizeof(char) * size + 1);
	if (!new)
		return (NULL);
	while (i <= size)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
