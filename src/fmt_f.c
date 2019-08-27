/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 18:04:32 by qleon             #+#    #+#             */
/*   Updated: 2019/08/27 16:42:33 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

intmax_t	get_arg_f(int len, va_list ap)
{
	if (len == BIGL)
		return (va_arg(ap, long double));
	else
		return (va_arg(ap, double));
}

t_str		*fmt_f(t_conv *conv, va_list ap)
{
	t_str		*str;
	long double	val;

	val = get_arg_f(conv->length, ap);
	str = new_string();

	return (str);
}
