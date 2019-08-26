/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 15:25:09 by qleon             #+#    #+#             */
/*   Updated: 2019/08/25 19:26:14 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

t_str	*fmt_s(t_conv *conv, va_list ap)
{
	t_str	*str;
	char	*s;

	s = va_arg(ap, char *);
	str = new_string();
	append_str(str, s, ft_strlen(s));
	pad_width(str, conv);
	return (str);
}
