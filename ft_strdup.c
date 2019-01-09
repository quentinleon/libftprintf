/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 08:51:10 by qleon             #+#    #+#             */
/*   Updated: 2018/11/30 13:16:04 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*str;

	len = ft_strlen(s1);
	str = (char*)malloc(len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (len >= 0)
	{
		str[len] = s1[len];
		len--;
	}
	return (str);
}
