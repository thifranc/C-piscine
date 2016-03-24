/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <thifranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 22:45:12 by thifranc          #+#    #+#             */
/*   Updated: 2015/12/13 20:39:51 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] == s2[index]
			&& (s1[index] != '\0' || s2[index] != '\0'))
		index++;
	if (s1[index] == '\0')
		return (-s2[index]);
	if (s2[index] == '\0')
		return (s1[index]);
	return (s1[index] - s2[index]);
}

void	ft_swap(char **s1, char **s2)
{
	char *backup;

	backup = *s1;
	*s1 = *s2;
	*s2 = backup;
}

void	ft_sort_wordtab(char **tab)
{
	int	i_inf;
	int	i_sup;

	i_sup = 0;
	while (tab[i_sup] != 0)
	{
		i_inf = 0;
		while (tab[i_inf] != '\0')
		{
			if (ft_strcmp(tab[i_sup], tab[i_inf]) < 0)
				ft_swap(&tab[i_sup], &tab[i_inf]);
			i_inf++;
		}
		i_sup++;
	}
}
