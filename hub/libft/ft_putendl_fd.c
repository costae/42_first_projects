/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 15:47:40 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/24 18:51:01 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	int		i;
	char	x;

	if (s == NULL)
		return ;
	if (fd < 1)
		return ;
	i = 0;
	x = '\n';
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &x, 1);
}
