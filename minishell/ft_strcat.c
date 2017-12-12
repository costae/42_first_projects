/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:43:36 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/20 15:51:03 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini.h"

char				*ft_strcat(char *dest, const char *src)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = 0;
	return (dest);
}

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*a;

	i = -1;
	a = (unsigned char *)b;
	while (++i < len)
	{
		a[i] = (unsigned char)c;
	}
	return ((void *)a);
}

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*res;

	i = 0;
	if (!s)
		return (0);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (0);
	while (i != len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char				*ft_strcpy(char *dest, const char *src)
{
	size_t i;

	i = 0;
	if (!src)
		dest = (char *)0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char				*ft_strjoin(char const *s1, char const *s2)
{
	char			*ret;
	char			*temp_ret;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1)
										+ ft_strlen((char *)s2) + 1));
	if (ret == NULL)
		return (NULL);
	temp_ret = ret;
	while (*s1 != '\0')
		*temp_ret++ = *s1++;
	while (*s2 != '\0')
		*temp_ret++ = *s2++;
	*temp_ret = '\0';
	return (ret);
}
