/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strbuilder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:28:53 by qleon             #+#    #+#             */
/*   Updated: 2019/08/27 20:27:47 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strbuilder.h"

t_str	*new_string(void)
{
	t_str	*str;

	str = (t_str *)malloc(sizeof(t_str));
	str->size = STR_START_SIZE;
	str->len = 0;
	str->str = (char *)malloc(sizeof(char) * (1024));
	return (str);
}

void	check_expand(t_str *str, int len)
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
}

void	append_str(t_str *str, const char *addition, int len)
{
	check_expand(str, len);
	ft_memcpy(str->str + str->len, addition, len);
	str->len += len;
	str->str[str->len] = 0;
}

void	prepend_chars(t_str *str, char c, int amt)
{
	check_expand(str, amt);
	ft_memmove(str->str + amt, str->str, str->len);
	ft_memset(str->str, c, amt);
	str->len += amt;
	str->str[str->len] = 0;
}

void	append_chars(t_str *str, char c, int amt)
{
	check_expand(str, amt);
	ft_memset(str->str + str->len, c, amt);
	str->len += amt;
	str->str[str->len] = 0;
}
