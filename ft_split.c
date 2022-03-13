/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:05:42 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/12 00:47:48 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_delimiter_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == 0))
			count++;
		s++;
	}
	return (count);
}

void	ft_free_all(char **output, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(output[i]);
	free(output);
}

char	**make_split(char const *s, char c, char **output, size_t substr_count)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < substr_count)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (s[len] != c && s[len])
			len++;
		output[i] = ft_substr(s, 0, len);
		if (!output[i])
		{
			ft_free_all(output, i);
			return (0);
		}
		s += len;
		i++;
	}
	return (output);
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	size_t	substr_count;

	substr_count = get_delimiter_count(s, c);
	output = (char **)ft_calloc((substr_count + 1), sizeof(char *));
	if (!output)
		return (0);
	return (make_split(s, c, output, substr_count));
}
