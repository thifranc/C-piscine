/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 15:57:53 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/26 15:14:04 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int div;

	if (nb == 1 || nb == 0 || nb % 2 == 0)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb > 2)
	{
		div = 3;
		while (div < nb / div)
		{
			if (nb % div == 0)
				return (0);
			div += 2;
		}
		return (1);
	}
	else
		return (0);
}
