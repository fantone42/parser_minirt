/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 15:40:23 by fantone           #+#    #+#             */
/*   Updated: 2020/11/25 23:51:57 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	size_t			start;
	size_t			end;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_set(s1[start], set) != 0)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_set(s1[end - 1], set) != 0)
		end--;
	if (start < end)
		return (ft_substr(s1, start, end - start));
	else
		return (ft_strdup(""));
}
