/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 13:46:12 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/05 13:53:17 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else if (((*begin_list)->next) == NULL)
		(*begin_list)->next = ft_create_elem(data);
	else
		ft_list_push_back(&((*begin_list)->next), data);
}
