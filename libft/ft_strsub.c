/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 23:15:42 by qleon             #+#    #+#             */
/*   Updated: 2018/11/30 13:27:29 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(const char *str, unsigned int start, size_t len)
{
	int		i;
	char	*sub_str;

	if (str == NULL)
		return (NULL);
	sub_str = (char *)malloc(len + 1);
	if (sub_str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (len)
	{
		sub_str[i] = str[start + i];
		i++;
		len--;
	}
	sub_str[i] = 0;
	return (sub_str);
}
