/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 10:50:10 by fantone           #+#    #+#             */
/*   Updated: 2020/11/22 11:21:36 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_newstr(size_t size)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*cleaner;

	if (!s || !f)
		return (NULL);
	cleaner = ft_newstr(ft_strlen(s));
	if (!cleaner)
		return (NULL);
	i = 0;
	while (s[i])
	{
		cleaner[i] = (*f)(i, s[i]);
		i++;
	}
	return (cleaner);
}
