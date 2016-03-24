/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 15:13:11 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/26 14:31:48 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_puiss2(int power)
{
	int reslt;

	reslt = 0;
	if (power > 0)
	{
		reslt = 2 * ft_puiss2(power - 1);
		return (reslt);
	}
	else
		return (1);
}

int	ft_sqrt(int nb)
{
	int	i;
	int lim;

	i = 0;
	if (nb == 0 || nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb > 0)
	{
		while (ft_puiss2(i) < nb)
			i++;
		lim = i;
		i = 0;
		while (i++ < ft_puiss2((lim / 2) + 1))
		{
			if (i * i == nb)
				return (i);
		}
	}
	return (0);
}
