/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:42:34 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/11 12:42:33 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_all.h"

int		ft_open(int ac, char **av, int i)
{
	int fd;

	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd != -1)
			return (fd);
		else
		{
			close(fd);
			return (ft_open(ac, av, i + 1));
		}
	}
	return (-1);
}

void	ft_hex(int ac, char **av, int i, int flag)
{
	int		fd;
	int		red;

	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (flag == 1)
			read(fd, g_buf, (16 - red));
		red = read(fd, g_buf, 16);
		while (red != 0 && red != -1 && fd != -1)
		{
			g_buf[red] = '\0';
			if (0 < red && red < 16 && av[i + 1] != '\0')
			{
				flag = ft_end_file(ac, av, i);
				break ;
			}
			else
				ft_putnb_hex();
			red = read(fd, g_buf, 16);
		}
		close(fd);
		i++;
	}
}

int		ft_end_file(int ac, char **av, int i)
{
	int len;
	int fd2;
	int red;

	len = ft_strlen();
	fd2 = ft_open(ac, av, i + 1);
	ft_error(av[i + 1]);
	if (fd2 != -1)
		red = read(fd2, g_buf + len, 1);
	len++;
	while (fd2 != -1 && len < 16 && red != 0 && red != -1)
	{
		red = read(fd2, g_buf + len, 1);
		len++;
	}
	g_buf[len] = '\0';
	if (ft_strlen() != 16 && av[i + 1] != '\0')
	{
		red = ft_end_file(ac, av, i + 1);
		return (0);
	}
	else
		ft_putnb_hex();
	close(fd2);
	return (1);
}

void	ft_opt_error(char *str)
{
	ft_putstr("hexdump: illegal option -- ");
	ft_putstr(str);
	ft_putstr("\nusage: hexdump [-bcCdovx] [-e fmt] [-f fmt_file] [-n length]");
	ft_putstr("\n               [-s skip] [file ...]\n");
	ft_putstr("       hd      [-bcdovx]  [-e fmt] [-f fmt_file] [-n length]\n");
	ft_putstr("               [-s skip] [file ...]\n");
}

int		main(int ac, char **av)
{
	g_offset = 0;
	if (!(g_buf = (char *)malloc(sizeof(char) * 17)))
		return (0);
	if (ac == 1 || (ft_strcmp(av[1], "-C") == 0 && av[2] == '\0'))
		while (ac != 9)
		{
		}
	else if (ft_strcmp(av[1], "-C") == 0 && av[2] != '\0')
		ft_hex_opt(ac, av, 2, 0);
	else
	{
		if (av[1][0] == '-' && av[1][1] != '\0')
		{
			ft_opt_error(av[1] + 1);
			return (0);
		}
		ft_error(av[1]);
		ft_hex(ac, av, 1, 0);
	}
	if (g_offset != 0 && ft_strcmp(av[1], "-C") != 0)
		ft_print_offset(g_offset);
	if (g_offset != 0 && ft_strcmp(av[1], "-C") == 0)
		ft_print_offset2(g_offset);
	ft_test_file(ac, av);
	return (0);
}
