/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erbastug <erbastug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 01:56:50 by erbastug          #+#    #+#             */
/*   Updated: 2024/11/15 02:22:24 by erbastug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		a;

	a = 0;
	i = ft_strlen(s1);
	str = (char *)malloc(i * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	while (a < i)
	{
		str[a] = s1[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}
