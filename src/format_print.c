/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:40:13 by qleon             #+#    #+#             */
/*   Updated: 2019/08/27 14:28:50 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_str	*format_print(const char *format, va_list ap)
{
	int		i;
	int		l;
	t_str	*str;

	i = 0;
	str = new_string();
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			i += append_conv(str, &(format[i]), ap);
		}
		else
		{
			l = find_next_conv(&(format[i]));
			append_str(str, &(format[i]), l);
			i += l;
		}
	}
	return (str);
}

t_str	*(*g_fmt_disp[])(t_conv *, va_list) =
{
	['d'] = fmt_di,
	['i'] = fmt_di,
	['u'] = fmt_u,
	['o'] = fmt_o,
	['c'] = fmt_c,
	['s'] = fmt_s,
	['p'] = fmt_p,
	['%'] = fmt_perc
};

int		append_conv(t_str *str, const char *fmt_str, va_list ap)
{
	int		fmt_len;
	t_conv	conv;
	t_str	*addition;
	t_str	*(*f)(t_conv *, va_list);

	conv = parse_conversion(fmt_str, &fmt_len);
	f = g_fmt_disp[(int)conv.specifier];
	if (f)
	{
		addition = f(&conv, ap);
		append_str(str, addition->str, addition->len);
		free(addition->str);
		free(addition);
	}
	else
	{
		append_chars(str, conv.specifier, 1);
	}
	return (fmt_len);
}
