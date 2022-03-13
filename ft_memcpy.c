/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:36 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/12 00:28:42 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned char	*srcs;

	i = 0;
	if (!dst && !src)
		return (0);
	dest = dst;
	srcs = (unsigned char *)src;
	while (i < n)
	{
		*(dest++) = *(srcs++);
		i++;
	}
	return (dst);
}
