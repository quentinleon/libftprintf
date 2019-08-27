/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_di.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 18:04:32 by qleon             #+#    #+#             */
/*   Updated: 2019/08/27 11:59:46 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

intmax_t	get_arg_d(int len, va_list ap)
{
	if (len == 0)
		return (va_arg(ap, int));
	else if (len == HH)
		return ((char)va_arg(ap, int));
	else if (len == H)
		return ((short)va_arg(ap, int));
	else if (len == L)
		return (va_arg(ap, long int));
	else if (len == LL)
		return (va_arg(ap, long long int));
	else if (len == J)
		return (va_arg(ap, intmax_t));
	else if (len == Z)
		return (va_arg(ap, size_t));
	else if (len == T)
		return (va_arg(ap, ptrdiff_t));
	else
		return (va_arg(ap, int));
}

t_str		*fmt_di(t_conv *conv, va_list ap)
{
	t_str		*str;
	intmax_t	i;

	i = get_arg_d(conv->length, ap);
	str = new_string();
	itoa_base(str, i, 10, FALSE);
	handle_precision(str, conv, 0);
	if (conv->flags & ZERO && !(conv->flags & MINUS))
		add_sign(str, pad_width(str, conv), i < 0, conv);
	else
	{
		add_sign(str, 0, i < 0, conv);
		pad_width(str, conv);
	}
	return (str);
}
