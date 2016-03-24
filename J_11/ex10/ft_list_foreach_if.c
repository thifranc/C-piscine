/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <thifranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 00:40:59 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/04 18:57:16 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	if (begin_list == NULL)
		return ;
	if (cmp(data_ref, begin_list->data) == 0)
		f(begin_list->data);
	if (begin_list)
		ft_list_foreach_if(begin_list->next, f, data_ref, cmp);
}
