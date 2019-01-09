/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:18:57 by qleon             #+#    #+#             */
/*   Updated: 2018/11/28 21:18:11 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	end;
	int		i;

	i = 0;
	end = 0;
	while (dest[end] && end < size)
	{
		end++;
	}
	while (src[i] && i < (int)(size - end - 1))
	{
		dest[end + i] = src[i];
		i++;
	}
	if (end < size)
	{
		dest[end + i] = 0;
	}
	return (end + ft_strlen(src));
}
