/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:49:21 by qleon             #+#    #+#             */
/*   Updated: 2018/11/30 13:04:46 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	unsigned char *src_byte;
	unsigned char *dest_byte;

	src_byte = (unsigned char *)src;
	dest_byte = (unsigned char *)dest;
	while (num)
	{
		*dest_byte = *src_byte;
		if (*dest_byte == (unsigned char)c)
		{
			return (dest_byte + 1);
		}
		dest_byte++;
		src_byte++;
		num--;
	}
	return (NULL);
}
