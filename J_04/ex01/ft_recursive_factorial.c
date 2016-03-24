/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 08:42:35 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/26 10:39:30 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (13 > nb && nb > 0)
	{
		if (nb != 1)
			return (nb * ft_recursive_factorial(nb - 1));
		else
			return (1);
	}
	else
		return (0);
}
