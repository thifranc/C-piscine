/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 13:09:59 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/29 16:41:25 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i_dest;
	int i_src;

	i_src = 0;
	i_dest = 0;
	while (dest[i_dest] != '\0')
		i_dest++;
	while (i_dest != ft_strlen(src) + ft_strlen(dest) && src[i_src] != '\0')
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	return (dest);
}
