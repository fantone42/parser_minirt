/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3_2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:47:51 by fantone           #+#    #+#             */
/*   Updated: 2021/04/21 17:48:13 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 18:51:14 by ashishae          #+#    #+#             */
/*   Updated: 2020/01/17 18:59:48 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_v3	cross_product(t_v3 a, t_v3 b)
{
	t_v3 result;

	result.x = a.y * b.z - a.z * b.y;
	result.y = a.z * b.x - a.x * b.z;
	result.z = a.x * b.y - a.y * b.x;
	return (result);
}

t_v3	substract(t_v3 vec1, t_v3 vec2)
{
	t_v3 result;

	result.x = vec1.x - vec2.x;
	result.y = vec1.y - vec2.y;
	result.z = vec1.z - vec2.z;
	return (result);
}

t_v3	v3_add(t_v3 vec1, t_v3 vec2)
{
	t_v3 result;

	result.x = vec1.x + vec2.x;
	result.y = vec1.y + vec2.y;
	result.z = vec1.z + vec2.z;
	return (result);
}

t_v3	v3_multiply(t_v3 vec1, double x)
{
	t_v3 result;

	result.x = vec1.x * x;
	result.y = vec1.y * x;
	result.z = vec1.z * x;
	return (result);
}
