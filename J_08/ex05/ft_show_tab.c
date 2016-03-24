/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 15:40:34 by thifranc          #+#    #+#             */
/*   Updated: 2015/11/06 08:12:48 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"

void				ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void				ft_print_word_tables(char **tab)
{
	int		y;

	y = 0;
	while (tab[y] != 0)
	{
		ft_putstr(tab[y]);
		ft_putchar('\n');
		y++;
	}
}

void				ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (0 <= nb && nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void				ft_show_tab(struct s_stock_par *par)
{
	int		i;

	i = 0;
	while (par[i])
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_word_tables(par[i].tab);
		i++;
	}
}
