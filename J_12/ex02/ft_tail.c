/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 10:31:22 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/10 18:02:51 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_all.h"

void	ft_opt_min(char **av, int ac, int beg, int nb)
{
	int		i;
	int		red;
	int		fd;
	int		max;
	char	lol[2];

	while (beg < ac)
	{
		i = 0;
		max = ft_file_len(av[beg]);
		fd = open(av[beg], O_RDONLY);
		red = read(fd, &lol, 1);
		if (ft_error(av[beg]) == 0 && ac - beg > 0 && ac != 3)
			ft_title(av, ac, beg, nb);
		while (red != 0 && red != -1)
		{
			lol[red] = '\0';
			if (i >= (max - nb))
				ft_putstr(lol);
			i++;
			red = read(fd, &lol, 1);
		}
		close(fd);
		beg++;
	}
}

void	ft_opt_plus(char **av, int ac, int beg, int nb)
{
	int		red;
	int		fd;
	int		back;
	char	lol[2];

	while (beg < ac)
	{
		fd = open(av[beg], O_RDONLY);
		red = read(fd, &lol, 1);
		back = nb;
		if (ft_error(av[beg]) == 0 && ac - beg > 0 && ac != 3)
			ft_title(av, ac, beg, nb);
		while (red != -1 && back-- != 1 && red != 0)
		{
			red = read(fd, &lol, 1);
		}
		while (red != -1 && red != 0)
		{
			ft_putchar(lol[0]);
			red = read(fd, &lol, 1);
		}
		close(fd);
		beg++;
	}
}

int		main(int ac, char **av)
{
	int opt_nb;
	int	*tab;
	int	flag;

	if (!(tab = (int*)malloc(sizeof(int) * 4)))
		return (0);
	if (av[1][2] == '\0')
		flag = 2;
	else
		flag = 1;
	tab = ft_lol(ft_amont(av, flag), flag);
	if (tab[0] == 0)
		return (0);
	opt_nb = tab[2];
	ft_inf_boucle(av, tab[3]);
	if (tab[1] == 2)
	{
		ft_opt_plus(av, ac, tab[3], opt_nb);
		return (0);
	}
	else
		ft_opt_min(av, ac, tab[3], opt_nb);
	return (0);
}
