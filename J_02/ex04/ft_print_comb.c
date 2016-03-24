/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/15 20:46:45 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/19 13:16:43 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_save_line(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != 55 || b != 56 || c != 57)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				ft_save_line(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
