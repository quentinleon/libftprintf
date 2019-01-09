/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:02:28 by qleon             #+#    #+#             */
/*   Updated: 2018/12/14 19:02:09 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int end;
	int i;

	i = 0;
	end = ft_strlen(dest);
	while (src[i])
	{
		dest[end + i] = src[i];
		i++;
	}
	dest[end + i] = src[i];
	return (dest);
}
