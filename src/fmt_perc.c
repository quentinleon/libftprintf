/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_perc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 20:58:09 by qleon             #+#    #+#             */
/*   Updated: 2019/08/26 13:29:05 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

t_str	*fmt_perc(t_conv *conv, va_list ap)
{
	t_str	*str;

	str = new_string();
	append_str(str, "%%", 1);
	pad_width(str, conv);
	(void)ap;
	return (str);
}
