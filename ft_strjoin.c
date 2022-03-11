/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:47:01 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/11 15:13:51 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	char	*output;

	size = 0;
	i = 0;
	size += ft_strlen(s1) + ft_strlen(s2);
	output = (char *)malloc(sizeof(char) * size + 1);
	if (!output)
		return (0);
	while (*s1)
		output[i++] = *(s1++);
	while (*s2)
		output[i++] = *(s2++);
	output[i] = 0;
	return (output);
}
