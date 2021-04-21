/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:36:59 by fantone           #+#    #+#             */
/*   Updated: 2021/04/21 17:37:24 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

typedef struct	s_color
{
	int red;
	int green;
	int blue;
}				t_color;

typedef union	u_int_color
{
	int				integer;
	unsigned char	comps[4];
}				t_int_color;

t_color			int_to_color(int color);
int				color_to_int(t_color color);

#endif
