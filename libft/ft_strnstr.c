/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:12:29 by fantone           #+#    #+#             */
/*   Updated: 2020/11/25 23:33:47 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len_n;

	len_n = ft_strlen(needle);
	if (len_n == 0)
		return ((char *)haystack);
	if (ft_strlen(haystack) < len_n || len < len_n)
		return (NULL);
	while (*haystack != '\0' && len >= len_n)
	{
		if (ft_strncmp(haystack, needle, len_n) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
