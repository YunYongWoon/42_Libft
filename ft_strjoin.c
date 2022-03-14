/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:47:01 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/14 13:46:51 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	size_t	i;
	char	*output;

	i = 0;
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	output = (char *)ft_calloc(s1_size + s2_size + 1, sizeof(char));
	if (!output)
		return (0);
	while (i < s1_size)
	{
		output[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_size)
	{
		output[s1_size + i] = s2[i];
		i++;
	}
	return (output);
}
