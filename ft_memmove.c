/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 22:12:55 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/11 14:59:16 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*srcs;
	size_t				i;

	i = 0;
	dest = (unsigned char *)dst;
	srcs = (const unsigned char *)src;
	while (i < len)
	{
		if (dest < srcs)
			dest[i] = srcs[i];
		else
			dest[len - i - 1] = srcs[len - i - 1];
		i++;
	}
	return (dst);
}
