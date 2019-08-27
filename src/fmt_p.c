/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 15:25:09 by qleon             #+#    #+#             */
/*   Updated: 2019/08/26 18:27:38 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

t_str	*fmt_p(t_conv *conv, va_list ap)
{
	t_str	*str;
	void	*p;

	p = va_arg(ap, void *);
	str = new_string();
	itoa_base(str, (intmax_t)p, 16, FALSE);
	prepend_chars(str, 'x', 1);
	prepend_chars(str, '0', 1);
	pad_width(str, conv);
	return (str);
}
