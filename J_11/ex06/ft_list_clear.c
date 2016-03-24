/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <thifranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/29 18:44:20 by thifranc          #+#    #+#             */
/*   Updated: 2015/12/29 18:44:36 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if (*begin_list != NULL)
	{
		ft_list_clear(&((*begin_list)->next));
		free(*begin_list);
		*begin_list = NULL;
	}
}
