/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 13:25:48 by qleon             #+#    #+#             */
/*   Updated: 2019/08/25 20:59:11 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTILS_H
# define FT_PRINTF_UTILS_H
# include <stdarg.h>
# include "strbuilder.h"

# define MINUS 1
# define PLUS 2
# define SPACE 4
# define HASH 8
# define ZERO 16

# define HH 1
# define H 2
# define L 3
# define LL 4
# define J 5
# define Z 6
# define T 7
# define BIGL 8

typedef struct	s_conv
{
	int			flags;
	int			width;
	int			precision;
	int			length;
	char		specifier;
}				t_conv;

int				append_conv(t_str *str, const char *fmt_str, va_list ap);

t_conv			parse_conversion(const char *fmt_str, int *c_len);

int				find_next_conv(const char *str);
void			pad_width(t_str *str, t_conv *conv);

void			itoa_base(t_str *str, uintmax_t value, int base, int upper);

t_str			*fmt_c(t_conv *conv, va_list ap);
t_str			*fmt_s(t_conv *conv, va_list ap);
t_str			*fmt_p(t_conv *conv, va_list ap);
t_str			*fmt_perc(t_conv *conv, va_list ap);

#endif
