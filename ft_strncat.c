/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:16:25 by qleon             #+#    #+#             */
/*   Updated: 2018/12/03 13:50:47 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t num)
{
	int		end;
	size_t	i;

	i = 0;
	end = ft_strlen(dest);
	while (src[i] && i < num)
	{
		dest[end + i] = src[i];
		i++;
	}
	dest[end + i] = 0;
	return (dest);
}
