/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nharivon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:16:32 by nharivon          #+#    #+#             */
/*   Updated: 2024/02/27 15:16:40 by nharivon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;

	to = (unsigned char *) dest;
	from = (unsigned char *) src;
	if (to < from)
		ft_memcpy(dest, src, n);
	else if (to > from)
	{
		to += n - 1;
		from += n - 1;
		while (n--)
			*to-- = *from--;
	}
	return (dest);
}
