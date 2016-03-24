/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:41:30 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/11 12:29:05 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALL_H
# define FT_ALL_H

# include <fcntl.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include <errno.h>
# include <stdlib.h>

int		g_offset;
char	*g_buf;

void	ft_test_file(int ac, char **av);
void	ft_hex_opt(int ac, char **av, int i, int lol);
int		ft_open(int ac, char **av, int i);
void	ft_display(int fd);
int		ft_strcmp(char *s1, char *s2);
void	ft_print_g_buf(char *str, int ct);
void	ft_print_offset2();
void	ft_putnb_hex2();
void	ft_opt_error(char *str);
void	ft_print_offset();
void	ft_error(char *str);
void	ft_print_hex(int nb, char *ref, int flag);
void	ft_putnb_hex();
void	ft_hex(int ac, char **av, int i, int flag);
int		ft_int_len(int nb);
int		*ft_amont(char **av, int i);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_nb_len(int nb);
int		ft_end_file(int ac, char **av, int i);
int		ft_end_file2(int ac, char **av, int i);
int		ft_strlen();

#endif
