/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 08:25:00 by qleon             #+#    #+#             */
/*   Updated: 2019/01/08 21:03:47 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	unsigned char *byte;

	byte = (unsigned char *)ptr;
	while (num)
	{
		if (*byte == (unsigned char)value)
		{
			return (byte);
		}
		byte++;
		num--;
	}
	return (NULL);
}
