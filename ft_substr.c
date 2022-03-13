/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:38:58 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/12 00:46:34 by yoyun            ###   ########.fr       */
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
	if (ft_strlen(s) < start)
		len = 0;
	output = (char *)ft_calloc((len + 1), sizeof(char));
	if (!output)
		return (0);
	while (i < len)
	{
		output[i] = s[start + i];
		i++;
	}
	return (output);
}
