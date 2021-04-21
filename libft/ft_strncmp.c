/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 16:23:19 by fantone           #+#    #+#             */
/*   Updated: 2020/11/25 23:33:54 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t num)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	if (num == 0)
		return (0);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (i < num)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (!s1[i] || !s2[i])
			return (0);
		i++;
	}
	return (0);
}
