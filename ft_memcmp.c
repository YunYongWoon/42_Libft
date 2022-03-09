/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:20:50 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/09 14:34:59 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cmp1;
	const unsigned char *cmp2;
	size_t				i;

	i = 0;
	cmp1 = (const unsigned char*)s1;
	cmp2 = (const unsigned char*)s2;
	while (i < n)
	{
		if (cmp1[i] != cmp2[i])
			return (cmp1[i] - cmp2[i]);
		i++;
	}
	return (0);
}