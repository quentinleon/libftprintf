/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:40:13 by qleon             #+#    #+#             */
/*   Updated: 2019/08/22 18:01:32 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_str	*format_print(const char *format, va_list ap)
{
	t_str	*str;

	str = new_string();
	str->len = vasprintf(&(str->str), format, ap);
	return (str);
}
