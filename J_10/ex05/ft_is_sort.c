/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <thifranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 03:06:00 by thifranc          #+#    #+#             */
/*   Updated: 2015/12/16 11:48:12 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int is_sort;

	is_sort = 1;
	i = 0;
	while (i < length - 1 && is_sort == 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			is_sort = 0;
		i++;
	}
	if (is_sort == 1)
		return (is_sort);
	is_sort = 1;
	i = 0;
	while (i < length - 1 && is_sort == 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			is_sort = 0;
		i++;
	}
	return (is_sort);
}
