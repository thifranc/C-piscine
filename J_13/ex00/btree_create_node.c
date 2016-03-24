/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 14:39:46 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/10 18:29:24 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *new;

	if (!(new = (t_btree*)malloc(sizeof(t_btree) * 1)))
		return (NULL);
	new->item = item;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
