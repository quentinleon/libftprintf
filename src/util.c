/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 13:26:19 by qleon             #+#    #+#             */
/*   Updated: 2019/08/25 20:48:08 by qleon            ###   ########.fr       */
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

void	pad_width(t_str *str, t_conv *conv)
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
}

void	itoa_base(t_str *str, uintmax_t value, int base, int upper)
{
	char	*charset;

	if (upper)
	{
		charset = "0123456789ABCDEF";
	}
	else
	{
		charset = "0123456789abcdef";
	}

	while (value != 0)
	{
		prepend_chars(str, charset[value % base], 1);
		value /= base;
	}
}
