/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 20:36:05 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/10 18:00:12 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

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

void	display(char *av)
{
	int		fd;
	int		red;
	char	lol[11];

	fd = open(av, O_RDONLY);
	red = read(fd, &lol, 10);
	while (red != 0 && red != -1)
	{
		lol[red] = '\0';
		ft_putstr(lol);
		red = read(fd, &lol, 10);
	}
	close(fd);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		display(av[i]);
		if (errno != 0)
		{
			ft_putstr("cat: ");
			ft_putstr(av[i]);
			if (errno == EACCES)
				ft_putstr(": Permission denied\n");
			else if (errno == EBADF)
				ft_putstr(": No such file or directory\n");
			else if (errno == 21)
				ft_putstr(": Is a directory\n");
			errno = 0;
		}
		i++;
	}
	return (0);
}
