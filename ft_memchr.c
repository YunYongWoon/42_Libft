/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:13:34 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/09 14:25:24 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*cmp;

	i = 0;
	cmp = s;
	while (i < n)
	{
		if (cmp[i] == c)
			return ((void *)cmp + i);
		i++;
	}
	return (0);
}