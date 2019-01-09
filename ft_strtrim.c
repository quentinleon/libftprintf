/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 15:54:05 by qleon             #+#    #+#             */
/*   Updated: 2018/11/30 17:09:13 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(const char *str)
{
	char	*new_str;
	size_t	len;
	int		start;
	int		end;
	int		i;

	i = 0;
	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		i++;
	if (len == 0 || (size_t)i == len)
		return (ft_strnew(0));
	start = i;
	i = len - 1;
	while (i > 0 && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		i--;
	end = i + 1;
	new_str = (char *)malloc(sizeof(char) * end - start + 1);
	if (new_str == NULL)
		return (NULL);
	new_str = ft_strncpy(new_str, str + start, end - start);
	new_str[end - start] = 0;
	return (new_str);
}
