/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:18:56 by fantone           #+#    #+#             */
/*   Updated: 2020/11/23 22:54:32 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (!len || dest == source)
		return (dst);
	if (dest > source)
	{
		i = len;
		while (i--)
			dest[i] = source[i];
	}
	else
	{
		while (len--)
			*dest++ = *source++;
	}
	return (dst);
}
