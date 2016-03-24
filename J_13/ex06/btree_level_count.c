/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 16:14:15 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/11 11:01:34 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int		btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	else
		return (1 +
			max(btree_level_count(root->left), btree_level_count(root->right)));
}
