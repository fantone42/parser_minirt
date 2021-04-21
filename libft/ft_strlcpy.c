/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:55:00 by fantone           #+#    #+#             */
/*   Updated: 2020/11/21 12:23:20 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char			*dest;
	const char		*source;
	size_t			i;

	dest = (char *)dst;
	source = (const char *)src;
	if (dest == NULL)
		return (0);
	i = dstsize;
	if (i != 0)
		while (--i != 0)
		{
			if ((*dest++ = *source++) == '\0')
				break ;
		}
	if (i == 0)
	{
		if (dstsize != 0)
			*dest = '\0';
		while (*source++)
			;
	}
	return (source - src - 1);
}
