/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 09:40:02 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/26 15:13:57 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;
	int i;
	int backup;

	i = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (13 > nb && nb > 0)
	{
		backup = nb;
		while (nb != i)
		{
			fact = backup * (nb - i);
			backup = fact;
			i++;
		}
		return (fact);
	}
	else
		return (0);
}
