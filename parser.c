/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:40:44 by fantone           #+#    #+#             */
/*   Updated: 2021/04/21 18:14:16 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	init_scene(t_scene *scene)
{
	scene->cameras = NULL;
	scene->lights = NULL;
	scene->objects = NULL;
	scene->height = 0;
	scene->width = 0;
	scene->ambient_color.red = -1;
	scene->ambient_color.green = -1;
	scene->ambient_color.blue = -1;
}

int     count_lines(char **split_arr)
{
    int i;

    i = 0;
    while (split_arr[i])
        i++;
    return (i);
}

void	parse_resolution(t_scene *scene, char **split_arr)
{
	if (scene->width != 0 || scene->height != 0)
    {
        printf("You can only specify resolution once in a scene.");
        exit(-1);
    }
	if (count_lines(split_arr) != 3)
    {
		printf("You have to add both height and width in R.");
        exit(-1);
    }
    scene->width = ft_atoi(split_arr[1]);
	scene->height = ft_atoi(split_arr[2]);
}

void    parse_line(t_scene *scene, char **split_arr)
{
    if (count_lines(split_arr) == 0)
        return ;
    else if (count_lines(split_arr) < 2)
    {      
        exit(-1);
        printf("ERROR!");
    }
    if (ft_strncmp(split_arr[0], "R", 1) == 0)
        parse_resolution(scene, split_arr);
}


t_scene *parser_file(char *file_name)
{
    int fd;
    int rb;
    char *line;
    t_scene *scene;
    char **split_arr; 

    fd = open(file_name, O_RDONLY);
    if (fd < 0)
        return (-1);
    scene = malloc(sizeof(t_scene));
    init_scene(scene);
    while ((rb = get_next_line(fd, &line)) > 0)
    {
        split_arr = ft_split(line, '');
        parse_line(scene, split_arr);
    }
}
