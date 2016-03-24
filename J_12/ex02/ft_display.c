/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:13:00 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/10 18:06:15 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_all.h"

int		ft_error(char *str)
{
	int		fd;

	fd = open(str, O_RDONLY);
	if (errno != 0 && errno != 9)
	{
		ft_putstr("tail: ");
		ft_putstr(str);
		if (errno == EACCES)
			ft_putstr(": Permission denied\n");
		else if (errno == 2)
			ft_putstr(": No such file or directory\n");
		else if (errno == 21)
			ft_putstr("\n");
		return (1);
	}
	return (0);
}

void	ft_title(char **av, int ac, int b, int n)
{
	if (b == 3 && ac == 4 &&
			(ft_atoi(av[b - 1]) == n || ft_atoi(av[b - 1]) == -n))
		return ;
	if (b != 2 && ft_atoi(av[b - 1]) != n && ft_atoi(av[b - 1]) != -n)
		ft_putchar('\n');
	ft_putstr("==> ");
	ft_putstr(av[b]);
	ft_putstr(" <==\n");
}

int		ft_file_len(char *str)
{
	int		i;
	int		fd;
	int		red;
	char	lol[11];

	fd = open(str, O_RDONLY);
	red = read(fd, &lol, 10);
	i = 0;
	while (red != 0 && red != -1)
	{
		lol[red] = '\0';
		i += ft_strlen(lol);
		red = read(fd, &lol, 10);
	}
	close(fd);
	return (i);
}

int		*ft_lol(int *t1, int nb)
{
	int i;
	int *tmp;

	if (!(tmp = (int*)malloc(sizeof(int) * 4)))
		return (0);
	i = 0;
	while (i < 3)
	{
		tmp[i] = t1[i];
		i++;
	}
	tmp[i] = nb + 1;
	return (tmp);
}
