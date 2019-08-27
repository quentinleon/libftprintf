/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 15:25:09 by qleon             #+#    #+#             */
/*   Updated: 2019/08/27 14:08:11 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

t_str	*fmt_s(t_conv *conv, va_list ap)
{
	t_str	*str;
	char	*s;
	int		len;

	s = va_arg(ap, char *);
	str = new_string();
	if (s != NULL)
	{
		len = ft_strlen(s);
		if (conv->precision >= 0 && conv->precision < len)
			len = conv->precision;
		append_str(str, s, len);
	}
	else
	{
		len = 6;
		if (conv->precision >= 0 && conv->precision < len)
			len = conv->precision;
		append_str(str, "(null)", len);
	}
	pad_width(str, conv);
	return (str);
}
