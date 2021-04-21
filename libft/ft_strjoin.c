/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:17:42 by fantone           #+#    #+#             */
/*   Updated: 2021/03/10 13:59:10 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	str = NULL;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (s1 && s2)
	{
		if (!(str = (char*)malloc(sizeof(char) * len)))
			return (NULL);
		ft_strlcpy(str, s1, len);
		ft_strlcat(str, s2, len);
	}
	return (str);
}
