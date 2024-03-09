/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nharivon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:12:06 by nharivon          #+#    #+#             */
/*   Updated: 2024/03/06 13:12:08 by nharivon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_char(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	if (n < 10)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = count_char(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	res = (char *) malloc(len + 1);
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	res[len--] = '\0';
	while (len >= 0 && res[len] != '-')
	{
		res[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (res);
}
