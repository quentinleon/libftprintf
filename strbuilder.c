/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strbuilder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:28:53 by qleon             #+#    #+#             */
/*   Updated: 2019/08/22 15:23:36 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strbuilder.h"

t_str	*new_string(void)
{
	t_str	*str;

	str = (t_str *)malloc(sizeof(t_str));
	str->size = 1024;
	str->len = 0;
	str->str = (char *)malloc(sizeof(char) * (1024));
	return (str);
}

void	append(t_str *str, char *addition)
{
	int		len;

	len = ft_strlen(addition);
	append_len(str, addition, len);
}

void	append_len(t_str *str, char *addition, int len)
{
	char	*newstr;

	if (str->len + len + 1 >= str->size)
	{
		while (str->len + len + 1 >= str->size)
			str->size *= 2;
		newstr = (char *)malloc(sizeof(char) * str->size);
		ft_strncpy(newstr, str->str, str->len);
		free(str->str);
		str->str = newstr;
	}
	ft_strncpy(str->str + str->len, addition, len);
	str->len += len;
	str->str[str->len] = 0;
}
