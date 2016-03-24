/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 13:34:13 by thifranc          #+#    #+#             */
/*   Updated: 2015/11/05 19:14:38 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	if (src[index] == '\0')
		dest[index] = src[index];
	return (dest);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	if ((dest = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))) == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*box;

	i = 0;
	if (!(box = (t_stock_par*)malloc(sizeof(struct s_stock_par) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		box[i].size_param = ft_strlen(av[i]);
		box[i].str = av[i];
		box[i].copy = ft_strdup(av[i]);
		box[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	box[i].str = 0;
	return (box);
}
