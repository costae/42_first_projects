/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 17:18:19 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/24 18:46:48 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	bfr;
	size_t	keep;
	size_t	i;

	i = 0;
	bfr = 0;
	keep = 0;
	if (s == NULL)
		return (NULL);
	while (s[bfr] == ' ' || s[bfr] == '\t' || s[bfr] == '\n')
		bfr++;
	while (s[i] != '\0')
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
		{
			i++;
			keep = i;
		}
		else
			i++;
	}
	if (keep == 0)
		return (ft_strdup(""));
	return (ft_strsub(s, bfr, (keep - bfr)));
}
