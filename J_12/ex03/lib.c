/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/05 10:21:54 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/10 19:22:30 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_all.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
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

int		ft_strlen(void)
{
	int i;

	i = 0;
	while (g_buf[i])
		i++;
	return (i);
}

int		ft_int_len(int nb)
{
	int i;

	i = 0;
	while (nb != 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}
