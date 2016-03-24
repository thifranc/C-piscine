/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <thifranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/29 18:48:40 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/04 17:18:48 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *first;

	first = ft_create_elem(data);
	if ((*begin_list))
		first->next = *begin_list;
	*begin_list = first;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*node;
	int		i;

	i = 0;
	node = NULL;
	while (i != ac)
	{
		ft_list_push_front(&node, av[i]);
		i++;
	}
	return (node);
}
