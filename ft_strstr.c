/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:46:53 by qleon             #+#    #+#             */
/*   Updated: 2018/12/14 19:06:01 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;
	int j;

	i = 0;
	if (str2[0] == 0)
		return ((char *)(str1));
	while (i == 0 || str1[i])
	{
		j = 0;
		while (str1[i + j] == str2[j])
		{
			if (str2[j + 1] == 0)
			{
				return ((char *)(str1 + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
