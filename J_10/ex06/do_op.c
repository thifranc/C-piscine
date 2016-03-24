/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 03:17:20 by thifranc          #+#    #+#             */
/*   Updated: 2015/11/29 23:34:56 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lol.h"

typedef	void	(*t_op)(int, int);

t_op	g_tab_op[5] = {
	ft_plus,
	ft_minus,
	ft_times,
	ft_div,
	ft_mod
};

int	main(int ac, char **av)
{
	int		i;
	int		nb1;
	int		nb2;

	if (ft_wild_cases(ac, av) == 0)
		return (0);
	i = 0;
	nb1 = ft_atoi(av[1]);
	nb2 = ft_atoi(av[3]);
	if (av[2][0] == '+')
		g_tab_op[0](nb1, nb2);
	else if (av[2][0] == '-')
		g_tab_op[1](nb1, nb2);
	else if (av[2][0] == '*')
		g_tab_op[2](nb1, nb2);
	else if (av[2][0] == '/')
		g_tab_op[3](nb1, nb2);
	else if (av[2][0] == '%')
		g_tab_op[4](nb1, nb2);
	return (0);
}

int	ft_wild_cases(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if ((av[2][0] != '-' && av[2][0] != '+' && av[2][0] != '%'
			&& av[2][0] != '*' && av[2][0] != '/') || av[2][1] != '\0')
	{
		ft_putstr("0\n");
		return (0);
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int nbr;
	int flag;
	int chr;
	int i;

	i = 0;
	flag = 0;
	nbr = 0;
	chr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		flag = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (('0' <= str[i] && str[i] <= '9') && str[i] != '\0')
	{
		chr = str[i] - 48;
		nbr = nbr * 10 + chr;
		i++;
	}
	if (flag == 1)
		nbr = -nbr;
	return (nbr);
}
