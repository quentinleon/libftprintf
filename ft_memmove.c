/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 21:12:29 by qleon             #+#    #+#             */
/*   Updated: 2018/11/30 15:09:24 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char *src_byte;
	unsigned char *dest_byte;

	if (dest <= src)
	{
		dest = ft_memcpy(dest, src, num);
	}
	else
	{
		src_byte = (unsigned char *)src + num - 1;
		dest_byte = (unsigned char *)dest + num - 1;
		while (num)
		{
			*dest_byte = *src_byte;
			dest_byte--;
			src_byte--;
			num--;
		}
	}
	return (dest);
}
