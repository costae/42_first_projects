/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 15:58:19 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/24 18:46:04 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	int		i;

	join = NULL;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (i + 1));
	if (!join)
		return (NULL);
	join = ft_strcpy(join, s1);
	join = ft_strcat(join, s2);
	return (join);
}
