/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 02:28:01 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/12 03:08:59 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_ultimator.h>

void	ft_destroy(char ***factory)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (factory[i])
	{
		while (factory[i][j])
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
