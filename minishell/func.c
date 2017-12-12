/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:02:45 by cmiron            #+#    #+#             */
/*   Updated: 2017/04/04 14:02:46 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini.h"

void				ft_strdel(char **as)
{
	if (!as)
		return ;
	free(*as);
	*as = NULL;
}

void				*ft_memalloc(size_t size)
{
	void			*mem;
	size_t			i;
	unsigned char	*temp;

	mem = malloc(size);
	temp = (unsigned char *)mem;
	i = 0;
	if (!mem)
		return (NULL);
	else
	{
		while (i < size)
		{
			temp[i] = 0;
			i++;
		}
	}
	return (mem);
}

int					ft_atoi(const char *str)
{
	int				i;
	int				dst;
	int				sign;

	i = 0;
	dst = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	i += (str[i] == '+' || str[i] == '-') ? 1 : 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		dst = (dst * 10) + (str[i] - 48);
		i++;
	}
	return (dst * sign);
}
