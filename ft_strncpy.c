/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:27:31 by qleon             #+#    #+#             */
/*   Updated: 2018/11/30 16:08:30 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t num)
{
	int i;

	i = 0;
	while (src[i] && num - i > 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (num - i > 0)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
