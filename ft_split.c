/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nharivon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:32:34 by nharivon          #+#    #+#             */
/*   Updated: 2024/03/05 14:32:35 by nharivon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			len++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (len);
}

static char	**clean_memo(char	**res)
{
	int	k;

	k = 0;
	while (res[k] != NULL)
	{
		free(res[k]);
		k++;
	}
	free(res);
	return (NULL);
}

static void	skip_index(char const *s, char c, int *i, int *start)
{
	while (s[*i] && s[*i] == c)
		*i = *i + 1;
	if (s[*i])
		*start = *i;
	while (s[*i] && s[*i] != c)
		*i = *i + 1;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		start;
	int		i;
	int		j;

	res = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	start = 0;
	j = 0;
	while (s[i] != '\0')
	{
		skip_index(s, c, &i, &start);
		if (s[i - 1] != c)
		{
			res[j] = ft_substr(s, start, i - start);
			if (!res[j++])
				return (clean_memo(res));
		}
	}
	res[j] = NULL;
	return (res);
}
