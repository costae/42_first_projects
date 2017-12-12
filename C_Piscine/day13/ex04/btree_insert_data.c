/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 17:51:00 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/19 17:51:16 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

nclude "ft_btree.h"

void	btree_insert_data(t_btree **root,
		void *item, int (*cmpf)(void *, void *))
{
	if (!(*root))
		btree_create_node(item);
	else if ((*cmpf)(item, (*root)->item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}
