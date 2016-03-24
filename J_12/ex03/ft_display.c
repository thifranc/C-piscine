/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:13:00 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/11 12:54:07 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_all.h"

void	ft_error(char *str)
{
	int		fd;

	fd = open(str, O_RDONLY);
	if (errno != 0 && errno != 9 && errno != 14)
	{
		ft_putstr("hexdump: ");
		ft_putstr(str);
		if (errno == EACCES)
			ft_putstr(": Permission denied\n");
		else if (errno == 2)
			ft_putstr(": No such file or directory\n");
		else if (errno == 21)
			ft_putstr("\n");
		close(fd);
	}
	close(fd);
}

void	ft_test_file(int ac, char **av)
{
	int i;

	i = 1;
	if (ft_open(ac, av, 1) == -1)
	{
		while (i++ < ac)
			ft_error(av[i]);
		ft_putstr("hexdump: ");
		ft_putstr(av[ac - 1]);
		ft_putstr(": Bad file descriptor");
	}
	ft_putchar('\n');
}

void	ft_print_hex(int nb, char *ref, int flag)
{
	if (0 <= nb && nb <= 15 && flag == 0)
	{
		ft_putchar('0');
		ft_putchar(ref[nb]);
	}
	else if (0 <= nb && nb <= 15 && flag >= 1)
		ft_putchar(ref[nb]);
	else if (nb > 15)
	{
		ft_print_hex(nb / 16, ref, flag + 1);
		ft_print_hex(nb % 16, ref, flag + 1);
	}
}

void	ft_print_offset(void)
{
	int i;

	i = -1;
	if (g_offset >= 0 && g_offset < 10)
		ft_putstr("00000");
	while (i++ < (6 - ft_int_len(g_offset)) && g_offset != 0 && g_offset > 9)
		ft_putchar('0');
	ft_print_hex(g_offset, "0123456789abcdef", 0);
}

void	ft_putnb_hex(void)
{
	int i;
	int ct;

	ct = 0;
	i = 0;
	ft_print_offset();
	g_offset += ft_strlen(g_buf);
	ft_putchar(' ');
	while (g_buf[i])
	{
		ft_print_hex(g_buf[i], "0123456789abcdef", 0);
		ct += 3;
		if (g_buf[i + 1] != '\0')
			ft_putchar(' ');
		i++;
	}
	while (ct != 48)
	{
		ft_putchar(' ');
		ct++;
	}
	ft_putchar('\n');
}
