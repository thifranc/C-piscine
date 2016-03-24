/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/05 10:21:54 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/06 17:50:52 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_all.h"

int		ft_strlen(char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int tmp;

	i = 0;
	nb = 0;
	while ((str[i] == '\t' || str[i] == '\n' || str[i] == ' ') && str[i])
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		tmp = str[i] - 48;
		nb = nb * 10 + tmp;
		i++;
	}
	return (nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}
