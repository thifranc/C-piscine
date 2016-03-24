/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <thifranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/25 17:14:38 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/05 14:00:22 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;

	if (*begin_list == NULL)
		return ;
	if (cmp(data_ref, (*begin_list)->data) == 0)
	{
		temp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(temp);
		ft_list_remove_if(&(*begin_list), data_ref, cmp);
	}
	else
		ft_list_remove_if(&(*begin_list)->next, data_ref, cmp);
}
