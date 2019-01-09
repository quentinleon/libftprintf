/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 20:36:19 by qleon             #+#    #+#             */
/*   Updated: 2018/12/03 13:37:14 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		count_words(const char *str, char delim)
{
	char	last_char;
	int		num_words;
	int		i;

	i = 0;
	last_char = delim;
	num_words = 0;
	while (str[i])
	{
		if (str[i] != delim && last_char == delim)
			num_words++;
		last_char = str[i];
		i++;
	}
	return (num_words + 1);
}

static int		word_len(const char *str, char delim)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != delim)
	{
		i++;
	}
	return (i);
}

char			**ft_strsplit(const char *str, char c)
{
	char	**words;
	int		w;
	int		i;
	int		j;

	if (str == NULL)
		return (NULL);
	if ((words = (char **)malloc(sizeof(char *) * count_words(str, c))) == NULL)
		return (NULL);
	i = 0;
	w = 0;
	while (str[i])
		if (str[i] != c && (j = -1))
		{
			if ((words[w] = ft_strnew(word_len(str + i, c))) == NULL)
				return (NULL);
			while ((j++ || 1) && str[i + j] && str[i + j] != c)
				words[w][j] = str[i + j];
			w++;
			i += j;
		}
		else
			i++;
	words[w] = 0;
	return (words);
}
