/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <thifranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:52:02 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/04 18:54:30 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
