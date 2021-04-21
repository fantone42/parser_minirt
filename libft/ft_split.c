/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantone <fantone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 12:31:25 by fantone           #+#    #+#             */
/*   Updated: 2020/11/23 21:51:34 by fantone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		w_count(const char *s, char c)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i] && (s[i] != c))
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static int		w_len(const char *s, char c)
{
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static void		*leak(char **arr, int count)
{
	int		i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	if (!(arr = (char **)malloc(sizeof(char *) * (w_count(s, c) + 1))))
		return (NULL);
	if (!c)
		arr[0] = (char *)s;
	i = 0;
	j = 0;
	while (s[i] && j < w_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		arr[j] = ft_substr(s, i, w_len(&s[i], c));
		if (arr[j] == 0)
			return (leak(arr, j));
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	arr[j] = NULL;
	return (arr);
}
