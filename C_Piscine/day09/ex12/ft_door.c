/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:53:58 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/12 16:54:22 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void		open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
}

void		close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
}

t_ft_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	if (door->state == OPEN)
		return (TRUE);
	else
		return (FALSE);
}

t_ft_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	if (door->state == CLOSE)
		return (TRUE);
	else
		return (FALSE);
}
