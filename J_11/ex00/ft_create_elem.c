/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 18:53:55 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/04 18:54:08 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *list;

	if ((list = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (0);
	else
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
