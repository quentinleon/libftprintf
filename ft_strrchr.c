/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:37:15 by qleon             #+#    #+#             */
/*   Updated: 2018/12/14 19:04:53 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = (int)ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
		i--;
	}
	return (NULL);
}
