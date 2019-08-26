/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_c.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 15:25:09 by qleon             #+#    #+#             */
/*   Updated: 2019/08/25 19:26:40 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

t_str	*fmt_c(t_conv *conv, va_list ap)
{
	t_str	*str;
	char	c;

	c = va_arg(ap, int);
	str = new_string();
	append_str(str, &c, 1);
	pad_width(str, conv);
	return (str);
}
