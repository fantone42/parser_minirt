/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:24:59 by fantone           #+#    #+#             */
/*   Updated: 2020/11/10 14:51:06 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 == *str2 && *str1)
	{
		if (str1 != str2)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		++str1;
		++str2;
	}
	return (0);
}
