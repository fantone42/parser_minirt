/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:44:32 by fantone           #+#    #+#             */
/*   Updated: 2021/04/21 18:16:14 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_H
# define SCENE_H

typedef struct	s_camera
{
	t_v3	origin;
	t_v3	direction;
	int		fov;
}				t_camera;

typedef struct	s_scene
{
	t_list		*objects;
	t_list		*lights;
	int			width;
	int			height;
	double		ambient_intensity;
	t_color2	ambient_color;
	t_list		*cameras;
	int			selected_camera;
}				t_scene;

typedef enum	e_object_type
{
	SPHERE,
	CUBE,
	PLANE,
	LIGHT,
	TRIANGLE,
	SQUARE,
	CYLINDER,
}				t_otype;

typedef struct	s_object
{
	t_otype		type;
	void		*ptr;
	t_color2	color;
	double		albedo;

}				t_object;

typedef struct	s_light
{
	t_v3		p0;
	double		intensity;
	t_color2	color;
}				t_light;

#endif