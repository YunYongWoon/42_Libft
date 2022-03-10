/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:38:58 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/10 15:38:38 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	output = (char *)malloc(sizeof(char) * len + 1);
	if (!output)
		return (0);
	while (i < len)
	{
		output[i] = s[start + i];
		i++;
	}
	output[i] = 0;
	return (output);
}
