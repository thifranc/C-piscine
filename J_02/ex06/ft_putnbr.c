/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 12:11:05 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/21 12:54:07 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_wild_cases(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar('1');
		ft_putchar('4');
		ft_putchar('7');
		ft_putchar('4');
		ft_putchar('8');
		ft_putchar('3');
		ft_putchar('6');
		ft_putchar('4');
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb == 0)
		ft_putchar('0');
}

void	ft_putnbr(int nb)
{
	char	tab[10];
	int		compteur;
	int		digit;

	ft_wild_cases(nb);
	compteur = 0;
	while (nb > 0)
	{
		digit = nb % 10;
		digit = digit + 48;
		nb /= 10;
		tab[compteur] = digit;
		compteur++;
	}
	while (compteur != 0)
	{
		ft_putchar(tab[compteur - 1]);
		compteur--;
	}
}
