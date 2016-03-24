/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:41:30 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/10 18:14:46 by thifranc         ###   ########.fr       */
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

void	ft_title(char **str, int ac, int beg, int nb);
void	ft_display(int fd);
void	ft_inf_boucle(char **av, int lol);
int		ft_error(char *str);
int		ft_file_len(char *str);
void	ft_opt_min(char **av, int ac, int beg, int nb);
int		main(int ac, char **av);
int		ft_atoi(char *str);
int		*ft_sign_opt(char *str);
int		*ft_amont(char **av, int i);
int		ft_strlen(char *c);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		*ft_lol(int *t1, int nb);

#endif
