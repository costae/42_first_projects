/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 18:26:11 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/11 20:52:33 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*a;

	i = 0;
	while (*(src + i))
		i++;
	if ((a = (char *)malloc(sizeof(char) * i + 1)) == 0)
	{
		errno = ENOMEM;
		return (0);
	}
	else
	{
		i = -1;
		while (*(src + ++i))
			*(a + i) = *(src + i);
		*(a + ++i) = '\0';
	}
	return (a);
}
