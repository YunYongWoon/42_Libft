/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:36 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/11 16:08:38 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*srcs;

	i = 0;
	dest = (unsigned char *)dst;
	srcs = (const unsigned char *)src;
	while (i < n)
	{
		*(dest++) = *(srcs++);
		i++;
	}
	return ((void *)dst);
}
