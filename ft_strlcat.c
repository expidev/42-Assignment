/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nharivon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:39:04 by nharivon          #+#    #+#             */
/*   Updated: 2024/02/27 16:39:06 by nharivon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	if (size == 0 || dst_len >= size)
		return (src_len + size);
	while (src[j] != '\0' && j < (size - dst_len - 1))
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
