/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <thifranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 04:53:58 by thifranc          #+#    #+#             */
/*   Updated: 2015/12/04 17:31:16 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lol.h"

void	ft_plus(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	ft_minus(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	ft_times(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	ft_div(int a, int b)
{
	if (b != 0)
	{
		ft_putnbr(a / b);
		ft_putchar('\n');
	}
	else
		ft_putstr("Stop : division by zero\n");
}

void	ft_mod(int a, int b)
{
	if (b != 0)
	{
		ft_putnbr(a % b);
		ft_putchar('\n');
	}
	else
		ft_putstr("Stop : modulo by zero\n");
}
