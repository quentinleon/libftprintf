/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 11:44:22 by qleon             #+#    #+#             */
/*   Updated: 2019/08/27 12:01:04 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

intmax_t	get_arg_u(int len, va_list ap)
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

t_str		*fmt_u(t_conv *conv, va_list ap)
{
	t_str		*str;
	intmax_t	i;

	i = get_arg_u(conv->length, ap);
	str = new_string();
	itoa_base(str, i, 10, FALSE);
	handle_precision(str, conv, 0);
	pad_width(str, conv);
	return (str);
}
