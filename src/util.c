/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 13:26:19 by qleon             #+#    #+#             */
/*   Updated: 2019/08/27 15:06:56 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

int		find_next_conv(const char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '%')
	{
		i++;
	}
	return (i);
}

void	handle_precision(t_str *str, t_conv *conv, int is_float)
{
	t_conv		precision_fc;
	int			precision;

	precision = conv->precision;
	if (is_float)
	{
		if (precision < 0)
			precision = 6;
	}
	else
	{
		if (precision < 0)
			precision = 1;
		precision_fc.width = precision;
		precision_fc.precision = -1;
		precision_fc.flags = 0;
		precision_fc.flags |= ZERO;
		pad_width(str, &precision_fc);
		if (precision == 0 && str->str[0] == '0')
		{
			str->len -= 1;
			str->str[str->len] = 0;
		}
	}
}

int		pad_width(t_str *str, t_conv *conv)
{
	int		width_diff;

	width_diff = conv->width - str->len;
	if (width_diff > 0)
	{
		if (conv->flags & MINUS)
		{
			append_chars(str, ' ', width_diff);
		}
		else
		{
			prepend_chars(str, (conv->flags & ZERO) ? '0' : ' ', width_diff);
		}
	}
	return (width_diff > 0 && conv->flags & ZERO);
}

void	add_sign(t_str *str, int replace, int is_neg, t_conv *conv)
{
	char sign;

	sign = 0;
	if (is_neg)
		sign = '-';
	else if (conv->flags & PLUS)
		sign = '+';
	else if (conv->flags & SPACE)
		sign = ' ';

	if (sign != 0)
	{
		if (replace)
		{
			str->str[0] = sign;
		}
		else
		{
			prepend_chars(str, sign, 1);
		}
	}
}

void	itoa_base(t_str *str, intmax_t value, int base, int upper)
{
	char	*charset;

	if (value < 0)
		value *= -1;
	if (upper)
	{
		charset = "0123456789ABCDEF";
	}
	else
	{
		charset = "0123456789abcdef";
	}
	if (value / base != 0)
		itoa_base(str, value / base, base, upper);
	append_chars(str, charset[value % base], 1);
}
