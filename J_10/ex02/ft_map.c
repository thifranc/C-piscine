/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 15:14:47 by thifranc          #+#    #+#             */
/*   Updated: 2015/11/06 16:07:11 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *back;

	i = 0;
	if (!(back = (int*)malloc(sizeof(int) * length)))
		return (NULL);
	while (i != length)
	{
		back[i] = f(tab[i]);
		i++;
	}
	return (back);
}
