/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 17:17:53 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/24 18:44:40 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	bie;

	bie = 0;
	if (s == NULL)
		return (NULL);
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	while (bie != len)
	{
		new[bie] = s[start + bie];
		bie++;
	}
	new[bie] = '\0';
	return (new);
}
