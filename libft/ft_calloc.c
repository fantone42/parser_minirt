/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:21:42 by fantone           #+#    #+#             */
/*   Updated: 2020/11/21 19:21:44 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*dst;
	unsigned int	total;
	unsigned int	i;

	total = count * size;
	if (!(dst = malloc(total)))
		return (NULL);
	i = 0;
	while (total--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
