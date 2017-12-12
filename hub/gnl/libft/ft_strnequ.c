/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 16:04:47 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/24 18:43:47 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (size == 0)
		return (1);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < size - 1)
		i++;
	if (s1[i] != s2[i])
		return (0);
	return (1);
}
