/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 17:54:00 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/26 17:54:10 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (f)(t_list *elem))
{
	t_list *list;

	if (lst)
	{
		list = lst;
		while (list)
		{
			f(list);
			list = list->next;
		}
	}
}
