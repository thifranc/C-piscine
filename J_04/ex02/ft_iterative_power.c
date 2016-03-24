/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 10:42:51 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/26 10:39:35 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	puiss;
	int backup;

	if (power > 0)
	{
		puiss = nb;
		backup = nb;
		while (power != 1)
		{
			nb = puiss * backup;
			puiss = nb;
			power--;
		}
		return (puiss);
	}
	else if (power < 0)
		return (0);
	else
		return (1);
}
