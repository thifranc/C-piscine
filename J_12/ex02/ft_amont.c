/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_amont.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 12:29:58 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/10 18:01:37 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_all.h"

void	ft_inf_boucle(char **av, int lol)
{
	if (av[lol] == '\0')
		while (lol)
		{
		}
}

void	ft_pt_eror(char *str)
{
	ft_putstr("tail: illegal offset -- ");
	ft_putstr(str);
	ft_putchar('\n');
}

int		*ft_sign_opt(char *str)
{
	int i;
	int *tab;

	if (!(tab = (int*)malloc(sizeof(int) * 2)))
		return (NULL);
	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	if (str[0] == '+')
		tab[1] = 2;
	if (str[0] == '-')
		tab[1] = 1;
	if (str[0] != '+' && str[0] != '-')
		tab[1] = 0;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
		i++;
	if (str[i] == '\0')
		tab[0] = 1;
	else
	{
		ft_pt_eror(str);
		tab[0] = 0;
	}
	return (tab);
}

int		*ft_amont(char **av, int i)
{
	int *tab2;
	int *tmp;

	if (!(tab2 = (int*)malloc(sizeof(int) * 4)))
		return (NULL);
	if (i == 2)
	{
		tmp = ft_sign_opt(av[2]);
		tab2[2] = ft_atoi(av[2]);
	}
	else
	{
		tmp = ft_sign_opt(av[1] + 2);
		tab2[2] = ft_atoi(av[1] + 2);
	}
	tab2[0] = tmp[0];
	tab2[1] = tmp[1];
	tab2[3] = i + 1;
	return (tab2);
}
