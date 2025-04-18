/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erbastug <erbastug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:11:58 by erbastug          #+#    #+#             */
/*   Updated: 2024/11/15 07:59:43 by erbastug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_free(char **arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static int	count_words(const char *str, char sep)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == sep)
			str++;
		else
		{
			i++;
			while (*str && *str != sep)
				str++;
		}
	}
	return (i);
}

static int	word_len(const char *str, char sep)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	arr = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		arr[i] = (char *)malloc((word_len(s, c) + 1) * sizeof(char));
		if (!arr[i])
			return (ft_free(arr, i));
		ft_strlcpy(arr[i], s, word_len(s, c) + 1);
		s += word_len(s, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
