/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 22:06:00 by thifranc          #+#    #+#             */
/*   Updated: 2015/10/22 14:52:37 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (*(s1 + index) == *(s2 + index) && index < n - 1
			&& (*(s1 + index) != '\0' || *(s2 + index)))
		index++;
	if (*(s1 + index) == '\0')
		return (-*(s2 + index));
	if (*(s2 + index) == '\0')
		return (*(s1 + index));
	return (*(s1 + index) - *(s2 + index));
}
