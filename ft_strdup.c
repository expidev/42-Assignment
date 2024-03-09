/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nharivon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:11:35 by nharivon          #+#    #+#             */
/*   Updated: 2024/03/01 15:11:38 by nharivon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;

	new = (char *) malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s, ft_strlen(s) + 1);
	return (new);
}
