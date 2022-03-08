/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:35:49 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/07 14:55:28 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

size_t ft_strlen(const char *str);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *b, size_t n);
void	ft_memcpy(void *dst, void *src, size_t n);

#endif
