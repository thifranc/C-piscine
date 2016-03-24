/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 12:29:52 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/26 10:39:41 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int reslt;

	reslt = 0;
	if (power == 1)
		return (nb);
	else if (power > 0)
	{
		reslt = nb * ft_recursive_power(nb, power - 1);
		return (reslt);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
