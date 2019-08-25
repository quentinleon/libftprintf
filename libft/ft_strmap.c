/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:28:40 by qleon             #+#    #+#             */
/*   Updated: 2018/11/30 13:27:50 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char *str, char (*f)(char))
{
	int		i;
	char	*new_str;

	if (str == NULL || f == NULL)
		return (NULL);
	i = 0;
	new_str = (char *)malloc(ft_strlen(str) + 1);
	if (new_str == NULL)
		return (NULL);
	while (str[i])
	{
		new_str[i] = f(str[i]);
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}
