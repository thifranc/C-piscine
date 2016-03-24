/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <thifranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 00:49:37 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/05 15:33:32 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL)
		return (NULL);
	if (cmp(begin_list->data, data_ref) == 0)
		return (begin_list);
	else if (begin_list->next)
		return (ft_list_find(begin_list->next, data_ref, cmp));
	else
		return (NULL);
}
