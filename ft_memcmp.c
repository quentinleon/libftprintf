/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 08:29:43 by qleon             #+#    #+#             */
/*   Updated: 2018/11/30 13:03:14 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char *byte1;
	unsigned char *byte2;

	byte1 = (unsigned char *)ptr1;
	byte2 = (unsigned char *)ptr2;
	while (num)
	{
		if (*byte1 != *byte2)
		{
			return (*byte1 - *byte2);
		}
		byte1++;
		byte2++;
		num--;
	}
	return (0);
}
