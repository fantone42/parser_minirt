/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 00:22:54 by fantone           #+#    #+#             */
/*   Updated: 2020/11/18 16:01:04 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*dest;
	char		*source;
	size_t		dsize;
	size_t		dlen;

	dsize = dstsize;
	dest = dst;
	source = (char *)src;
	while (*dest != '\0' && dsize-- != 0)
		dest++;
	dlen = dest - dst;
	dsize = dstsize - dlen;
	if (dsize == 0)
		return (dlen + ft_strlen(source));
	while (*source != '\0')
	{
		if (dsize != 1)
		{
			*dest++ = *source;
			dsize--;
		}
		source++;
	}
	*dest = '\0';
	return (dlen + (source - src));
}
