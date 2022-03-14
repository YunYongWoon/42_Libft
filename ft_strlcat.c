/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 22:38:39 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/14 12:31:24 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = 0;
	dst_len = 0;
	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize >= dst_len + 1)
	{
		while (src[i] != 0 && dst_len + i + 1 < dstsize)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	else
		return (dstsize + src_len);
	dst[dst_len + i] = 0;
	return (dst_len + src_len);
}
