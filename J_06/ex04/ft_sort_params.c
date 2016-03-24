/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 11:28:48 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/28 07:59:10 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap(char **a, char **b)
{
	char *backup;

	backup = *a;
	*a = *b;
	*b = backup;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i])
		&& (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	if (s1[i] == '\0')
		return (-s2[i]);
	if (s2[i] == '\0')
		return (s1[i]);
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int y;
	int i;

	i = 1;
	while (i != argc)
	{
		y = 0;
		while (y <= argc - 2)
		{
			if (ft_strcmp(argv[i], argv[y + 1]) < 0)
				ft_swap(&argv[i], &argv[y + 1]);
			y++;
		}
		i++;
	}
	y = 1;
	while (y <= argc - 1)
	{
		ft_putstr(argv[y]);
		y++;
	}
}
