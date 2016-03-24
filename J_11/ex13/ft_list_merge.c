/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <thifranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/26 21:07:34 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/07 20:28:49 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *lol;

	lol = *begin_list1;
	if (*begin_list1 == NULL)
		*begin_list1 = begin_list2;
	else
	{
		while (lol->next)
			lol = lol->next;
		lol->next = begin_list2;
	}
}
