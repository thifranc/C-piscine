/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 16:08:36 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/11 12:12:19 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (root->left)
			btree_search_item(root->left, data_ref, cmpf);
		if (cmpf(root->item, data_ref) == 0)
			return (root->item);
		if (root->right)
			btree_search_item(root->right, data_ref, cmpf);
	}
	return (NULL);
}
