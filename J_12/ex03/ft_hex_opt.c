/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_opt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 15:21:22 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/11 12:52:17 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_all.h"

void	ft_hex_opt(int ac, char **av, int i, int flag)
{
	int		fd;
	int		red;

	while (i < ac)
	{
		fd = ft_open(ac, av, i);
		if (flag == 1)
			read(fd, g_buf, (16 - red));
		red = read(fd, g_buf, 16);
		while (red != 0 && red != -1 && fd != -1)
		{
			g_buf[red] = '\0';
			if (0 < red && red < 16 && av[i + 1] != '\0')
			{
				flag = ft_end_file2(ac, av, i);
				break ;
			}
			else
				ft_putnb_hex2();
			red = read(fd, g_buf, 16);
		}
		close(fd);
		i++;
	}
}

int		ft_end_file2(int ac, char **av, int i)
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
		red = ft_end_file2(ac, av, i + 1);
		return (0);
	}
	else
		ft_putnb_hex2();
	close(fd2);
	return (1);
}

void	ft_print_offset2(void)
{
	int i;

	i = -1;
	if (g_offset >= 0 && g_offset < 10)
		ft_putstr("000000");
	while (i++ < (7 - ft_int_len(g_offset)) && g_offset != 0 && g_offset > 9)
		ft_putchar('0');
	ft_print_hex(g_offset, "0123456789abcdef", 0);
}

void	ft_print_g_buf(char *str, int ct)
{
	int i;

	i = 0;
	if (ft_strlen(str) < 8)
		ft_putchar(' ');
	while (ct != 50)
	{
		ft_putchar(' ');
		ct++;
	}
	ft_putchar('|');
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			ft_putchar('.');
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('|');
}

void	ft_putnb_hex2(void)
{
	int i;
	int ct;

	ct = 0;
	i = 0;
	ft_print_offset2();
	g_offset += ft_strlen(g_buf);
	ft_putchar(' ');
	ft_putchar(' ');
	while (g_buf[i])
	{
		ft_print_hex(g_buf[i], "0123456789abcdef", 0);
		ct += 3;
		if (g_buf[i + 1] != '\0')
			ft_putchar(' ');
		if (ct == 24)
			ft_putchar(' ');
		i++;
	}
	ft_print_g_buf(g_buf, ct);
	ft_putchar('\n');
}
