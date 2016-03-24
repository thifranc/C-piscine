/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 15:56:08 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/21 17:53:11 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	char	backup;
	int		j;

	i = 0;
	while (str[i])
		i++;
	i--;
	j = i;
	i = 0;
	while (i < j / 2 + 1)
	{
		backup = str[i];
		str[i] = str[j - i];
		str[j - i] = backup;
		i++;
	}
	return (str);
}
