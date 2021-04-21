/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:39:33 by fantone           #+#    #+#             */
/*   Updated: 2021/04/21 17:39:49 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_color2	color2_add(t_color2 a, t_color2 b)
{
	t_color2	result;

	result.red = fmin(a.red + b.red, 0.99);
	result.green = fmin(a.green + b.green, 0.99);
	result.blue = fmin(a.blue + b.blue, 0.99);
	return (result);
}

t_color2	color2_mult(t_color2 a, t_color2 b)
{
	t_color2 result;

	result.red = fmin(a.red * b.red, 1);
	result.green = fmin(a.green * b.green, 1);
	result.blue = fmin(a.blue * b.blue, 1);
	return (result);
}

t_color2	color2_coeff(t_color2 a, double coeff)
{
	t_color2 result;

	result.red = fmin(a.red * coeff, 1);
	result.green = fmin(a.green * coeff, 1);
	result.blue = fmin(a.blue * coeff, 1);
	return (result);
}

int			to_int(t_color2 a)
{
	int		result;
	t_color this;

	this.red = a.red * 256;
	this.green = a.green * 256;
	this.blue = a.blue * 256;
	result = color_to_int(this);
	return (result);
}
