/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:46:22 by fantone           #+#    #+#             */
/*   Updated: 2021/04/21 17:46:38 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef V3_H
# define V3_H

/*
**	Basic functions to work in 3d (and width vectors)
*/

typedef struct	s_v3
{
	double x;
	double y;
	double z;
}				t_v3;
t_v3			create_v3(double x, double y, double z);
double			vector_len(t_v3 vector);
double			dot_product(t_v3 a, t_v3 b);
t_v3			substract(t_v3 vec1, t_v3 vec2);
void			normalize_vector(t_v3 *vector);
t_v3			v3_add(t_v3 vec1, t_v3 vec2);
t_v3			v3_multiply(t_v3 vec1, double x);
t_v3			cross_product(t_v3 a, t_v3 b);

#endif