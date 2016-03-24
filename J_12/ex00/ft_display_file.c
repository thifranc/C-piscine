/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 19:31:27 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/10 17:58:14 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>

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

int		ft_wild_case(int ac)
{
	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (ac != 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else
		return (1);
}

int		main(int ac, char **av)
{
	int		fd;
	int		red;
	char	lol[11];

	if (ft_wild_case(ac) == 0)
		return (0);
	fd = open(av[1], O_RDONLY);
	red = read(fd, &lol, 10);
	while (red != 0)
	{
		lol[red] = '\0';
		ft_putstr(lol);
		red = read(fd, &lol, 10);
	}
	close(fd);
	return (0);
}
