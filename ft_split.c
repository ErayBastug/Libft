/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erbastug <eray.bastug@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:16:43 by erbastug          #+#    #+#             */
/*   Updated: 2024/11/12 15:51:45 by erbastug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int word_counter(const char *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while(s[i])
	{
		if(s[i] == c)
			i++;
		else
		{
			word++;
			while(s[i] && s[i] != c)
				i++;
		}
	}
	return (word);
}

void word_print(char *word, const char *s, int i, int word_len)
{
	int a;

	a = 0;
	while (word_len > 0)
	{
		word[a] = s[i - word_len];
		a++;
		word_len--;
	}
	word[a] = '\0';
}

char 	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

char	**ft_split_words(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2)
			return	(free_array(s2, word));
		word_print(s2[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

char **ft_split(const char *s, char c)
{
	char **s2;
	int num_word;

	if (s == NULL)
		return (0);
	num_word = word_counter(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_word + 1));
	if (s2 == NULL)
		return (0);
	s2 = ft_split_words(s, c, s2, num_word);
	return (s2);
}



int main()
{
    char **result;
    char *str = "Hello World! This is a test string.";
    int i = 0;

    result = ft_split(str, ' ');
    while (result[i] != NULL)
    {
        printf("Word %d: %s\n", i, result[i]);
        free(result[i]);  // Her bir kelimeyi serbest bırakıyoruz.
        i++;
    }
    free(result);  // Son olarak, s2 dizisini serbest bırakıyoruz.

    return 0;
}
