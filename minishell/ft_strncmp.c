/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 16:03:25 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/23 18:49:11 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini.h"

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

char				*ft_strchr(const char *s, int c)
{
	size_t			i;
	char			chr;

	i = 0;
	chr = (char)c;
	while (s[i] != '\0' && s[i] != chr)
		i++;
	if (s[i] == chr)
		return ((char *)&s[i]);
	return (0);
}

void				ft_strclr(char *s)
{
	if (!s)
		return ;
	ft_memset(s, '\0', ft_strlen(s));
}

char				*ft_strnew(size_t size)
{
	return (ft_memalloc((size + 1) * sizeof(char)));
}

char				*ft_strdup(const char *s)
{
	char			*str;
	size_t			i;
	size_t			j;

	i = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	j = 0;
	while (j < i)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
