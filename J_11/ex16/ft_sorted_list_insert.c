/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <thifranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/29 19:46:50 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/07 20:30:40 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	void	*temp;
	t_list	*cur;
	t_list	*lol;

	lol = *begin_list;
	if (lol == NULL || lol->next == NULL)
		return ;
	while (lol)
	{
		cur = lol->next;
		while (cur)
		{
			if (cmp(lol->data, cur->data) > 0)
			{
				temp = lol->data;
				lol->data = cur->data;
				cur->data = temp;
			}
			cur = cur->next;
		}
		lol = lol->next;
	}
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new;

	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
	ft_list_sort2(begin_list, cmp);
}
