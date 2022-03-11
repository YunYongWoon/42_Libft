/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:17:23 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/11 20:04:06 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*next;

	start = NULL;
	while (lst != NULL)
	{
		next = ft_lstnew(f(lst -> content));
		if (!next)
			ft_lstclear(&start, del);
		ft_lstadd_back(&start, next);
		lst = lst -> next;
	}
	return (start);
}
