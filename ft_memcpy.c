/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:30:49 by qleon             #+#    #+#             */
/*   Updated: 2018/11/30 13:03:22 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char *src_byte;
	unsigned char *dest_byte;

	src_byte = (unsigned char *)src;
	dest_byte = (unsigned char *)dest;
	while (num)
	{
		*dest_byte = *src_byte;
		dest_byte++;
		src_byte++;
		num--;
	}
	return (dest);
}
