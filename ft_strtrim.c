/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erbastug <erbastug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 02:07:54 by erbastug          #+#    #+#             */
/*   Updated: 2024/11/15 06:45:54 by erbastug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/_types/_null.h>

static int	ft_chrchr(char *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned long	a;
	int				c;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (*s1 == '\0')
		return (ft_strdup(""));
	i = 0;
	a = ft_strlen(s1) - 1;
	while (ft_chrchr((char *)set, s1[i]))
		i++;
	while (ft_chrchr((char *)set, s1[a]))
		a--;
	c = a - (i - 1);
	return (ft_substr(s1, i, c));
}
