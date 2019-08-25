/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:07:19 by qleon             #+#    #+#             */
/*   Updated: 2018/12/03 13:10:58 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(const char *str)
{
	char	last_char;
	int		num_words;
	int		i;

	i = 0;
	last_char = ' ';
	num_words = 0;
	while (str[i])
	{
		if (!ft_isspace(str[i]) && ft_isspace(last_char))
			num_words++;
		last_char = str[i];
		i++;
	}
	return (num_words);
}
