/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:58:33 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/11 19:40:15 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	size_t	i;
	char	*output;

	if (!s1 || !*s1)
		return (0);
	front = 0;
	rear = ft_strlen(s1) - 1;
	while (is_set(s1[front], set) && s1[front])
		front++;
	while (is_set(s1[rear], set) && rear > front)
		rear--;
	output = (char *)malloc(sizeof(char) * (rear - front + 1));
	if (!output)
		return (0);
	i = 0;
	while (front <= rear)
		output[i++] = s1[front++];
	output[i] = 0;
	return (output);
}
