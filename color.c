/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:38:22 by fantone           #+#    #+#             */
/*   Updated: 2021/04/21 17:38:54 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_color	int_to_color(int color)
{
	t_int_color	a;
	t_color		result;

	a.integer = color;
	result.red = a.comps[2];
	result.green = a.comps[1];
	result.blue = a.comps[0];
	return (result);
}

int		color_to_int(t_color color)
{
	t_int_color a;

	a.comps[2] = color.red;
	a.comps[1] = color.green;
	a.comps[0] = color.blue;
	return (a.integer);
}
