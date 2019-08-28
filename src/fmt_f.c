/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 18:04:32 by qleon             #+#    #+#             */
/*   Updated: 2019/08/27 19:40:37 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

long double	get_arg_f(int len, va_list ap)
{
	if (len == BIGL)
		return (va_arg(ap, long double));
	else
		return (va_arg(ap, double));
}

int			rec_f2str(t_str *str, intmax_t num, long double frac, t_conv *conv)
{
	int			index;
	const char	digits[] = "0123456789";

	index = str->len;
	if (num > 0)
	{
		prepend_chars(str, digits[num % 10], 1);
		if (num / 10 == 0 && (conv->precision > 0 || conv->flags & HASH))
			append_chars(str, '.', 1);
	}
	else if (conv->precision > 0)
	{
		num = (intmax_t)(frac * 10);
		frac = (frac * 10) - num;
		append_chars(str, digits[num % 10], 1);
		conv->precision--;
	}
	else
		return ((intmax_t)(frac * 10) >= 5);
	if (rec_f2str(str, num / 10, frac, conv))
		str->str[index]++;
	if (str->str[index] > '9')
		return ((str->str[index] = '0') > 0);
	return (0);
}

void		f2str(t_str *str, t_conv *conv, long double value)
{
	long double fraction;
	intmax_t	whole;

	if (value < 0)
		value *= -1;
	if (conv->precision < 0)
		conv->precision = 6;
	whole = (intmax_t)value;
	fraction = value - (long double)whole;
	if (whole == 0)
	{
		append_str(str, "0", 1);
		if (conv->precision > 0)
			append_str(str, ".", 1);
	}
	if (rec_f2str(str, whole, fraction, conv))
		prepend_chars(str, '1', 1);
}

t_str		*fmt_f(t_conv *conv, va_list ap)
{
	t_str		*str;
	long double	val;

	val = get_arg_f(conv->length, ap);
	str = new_string();
	f2str(str, conv, val);
	if (conv->flags & ZERO && !(conv->flags & MINUS))
		add_sign(str, pad_width(str, conv), val < 0, conv);
	else
	{
		add_sign(str, 0, val < 0, conv);
		pad_width(str, conv);
	}
	return (str);
}
