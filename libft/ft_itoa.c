/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 11:22:25 by fantone           #+#    #+#             */
/*   Updated: 2020/11/22 16:38:27 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	nb_rank(long n_l, int sign)
{
	unsigned int	nb_r;

	if (n_l == 0)
		return (1);
	nb_r = 0;
	while (n_l > 0)
	{
		n_l /= 10;
		nb_r++;
	}
	if (sign == -1)
		nb_r++;
	return (nb_r);
}

static void			ft_rev(char *str, long n_l, unsigned int nb_r, int sign)
{
	str[nb_r] = '\0';
	str[--nb_r] = n_l % 10 + '0';
	n_l /= 10;
	while (n_l > 0)
	{
		str[--nb_r] = n_l % 10 + '0';
		n_l /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char				*ft_itoa(int n)
{
	char			*str;
	long			n_l;
	unsigned int	nb_r;
	int				sign;

	sign = 1;
	if (n < 0)
	{
		n_l = (long)n * -1;
		sign = -1;
	}
	else
		n_l = n;
	nb_r = nb_rank(n_l, sign);
	if (!(str = malloc(sizeof(char) * (nb_r + 1))))
		return (NULL);
	ft_rev(str, n_l, nb_r, sign);
	return (str);
}
