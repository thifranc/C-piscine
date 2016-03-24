/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <thifranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/29 19:27:28 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/05 14:21:07 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	if (begin_list == NULL)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (nbr == 1 && begin_list->next == NULL)
		return (NULL);
	if (nbr == 0)
		return (begin_list);
	if (begin_list == NULL)
		return (NULL);
	else
		return (ft_list_at(begin_list->next, nbr - 1));
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list			*prv;
	t_list			*cur;
	t_list			*beg;
	t_list			temp;
	unsigned int	cursor;

	cursor = ft_list_size(begin_list) - 1;
	beg = ft_list_at(begin_list, cursor);
	if (begin_list == NULL || begin_list->next == NULL)
		return ;
	while (cursor != 0)
	{
		prv = ft_list_at(begin_list, cursor - 1);
		cur = ft_list_at(begin_list, cursor);
		cur->next = prv;
		cursor--;
	}
	temp = *begin_list;
	*begin_list = *beg;
	*beg = temp;
	cur->next = beg;
	beg->next = NULL;
}
