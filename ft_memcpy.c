/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:36 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/14 10:46:15 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srcs;

	i = 0;
	if (!dst && !src)
		return (0);
	dest = (unsigned char *)dst;
	srcs = (unsigned char *)src;
	while (i < n)
	{
		*(dest++) = *(srcs++);
		i++;
	}
	return (dst);
}
