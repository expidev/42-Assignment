/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nharivon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:48:34 by nharivon          #+#    #+#             */
/*   Updated: 2024/02/29 10:48:35 by nharivon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lit_len;

	lit_len = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *) big);
	while (*big != '\0' && lit_len <= len--)
	{
		if (!ft_strncmp(big, little, lit_len))
			return ((char *) big);
		big++;
	}
	return (0);
}
