/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:20:18 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/07 14:49:03 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*result;

	i = 0;
	result = b;
	while (i < len)
		result[i++] = c;
	return (b);
}
