/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_o.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 11:44:22 by qleon             #+#    #+#             */
/*   Updated: 2019/08/27 19:14:32 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

intmax_t	get_arg_o(int len, va_list ap)
{
	if (len == 0)
		return (va_arg(ap, unsigned int));
	else if (len == HH)
		return ((unsigned char)va_arg(ap, unsigned int));
	else if (len == H)
		return ((unsigned short)va_arg(ap, unsigned int));
	else if (len == L)
		return (va_arg(ap, unsigned long int));
	else if (len == LL)
		return (va_arg(ap, unsigned long long int));
	else if (len == J)
		return (va_arg(ap, uintmax_t));
	else if (len == Z)
		return (va_arg(ap, size_t));
	else if (len == T)
		return (va_arg(ap, ptrdiff_t));
	else
		return (va_arg(ap, int));
}

t_str		*fmt_o(t_conv *conv, va_list ap)
{
	t_str		*str;
	intmax_t	i;

	i = get_arg_o(conv->length, ap);
	str = new_string();
	itoa_base(str, i, 8, FALSE);
	handle_precision(str, conv);
	if (conv->flags & HASH && str->str[0] != '0')
		prepend_chars(str, '0', 1);
	pad_width(str, conv);
	return (str);
}
