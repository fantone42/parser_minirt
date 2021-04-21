/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 02:29:48 by fantone           #+#    #+#             */
/*   Updated: 2021/04/14 15:05:35 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*allocate_one_byte(char **tail)
{
	*tail = malloc(1);
	**tail = '\0';
	return (*tail);
}

char	*tail_before_n(char *tail)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	while (tail[i] != '\n')
		i++;
	if (!(cpy = (char *)malloc((i + 1) * sizeof(*cpy))))
		return (NULL);
	j = 0;
	while (i > 0)
	{
		cpy[j] = tail[j];
		j++;
		i--;
	}
	cpy[j] = '\0';
	return (cpy);
}

char	*fill_line(char *buff, char *tail, char **line)
{
	char	*p_n;

	if ((p_n = ft_strchr(tail, '\n')) != 0)
	{
		*line = tail_before_n(tail);
		p_n = ft_strdup(++p_n);
	}
	else
		*line = ft_strdup(tail);
	free(tail);
	free(buff);
	return (p_n);
}

int		get_next_line(int fd, char **line)
{
	char		*buff;
	static char	*tail;
	int			r_b;
	char		*p;

	if (fd < 0 || !line || BUFFER_SIZE <= 0 || (read(fd, 0, 0)) < 0 ||
		!(buff = malloc(BUFFER_SIZE + 1)))
		return (-1);
	r_b = 1;
	tail == NULL ? allocate_one_byte(&tail) : NULL;
	while (!(ft_strchr(tail, '\n')) && (r_b = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[r_b] = '\0';
		p = ft_strjoin(tail, buff);
		free(tail);
		tail = p;
	}
	if ((r_b != 0) || (tail != 0))
	{
		p = fill_line(buff, tail, line);
		tail = p;
	}
	else if (r_b == -1)
		return (-1);
	return (r_b == 0 ? 0 : 1);
}
