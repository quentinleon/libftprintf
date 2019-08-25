/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:28:38 by qleon             #+#    #+#             */
/*   Updated: 2019/08/25 12:31:51 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "strbuilder.h"
# include "libft/libft.h"

/* Flag Definitions */
# define MINUS = 1
# define PLUS = 2
# define SPACE = 4
# define HASH = 8
# define ZERO = 16

/* Length Conversion Definitions */
# define HH = 1
# define H = 2
# define L = 3
# define LL = 4
# define J = 5
# define Z = 6
# define T = 7
# define BIGL = 8

/* Conversion Struct */
typedef struct s_conv {
	int		flags;
	int		width;
	int		precision;
	int		length;
	char	specifier;
}			t_conv;

/* Function Protos */
t_str		*format_print(const char *format, va_list ap);

int			ft_printf(const char *format, ...);
int			ft_vprintf(const char *format, va_list ap);

int			ft_dprintf(int fd, const char *format, ...);
int			ft_vdprintf(int fd, const char *format, va_list ap);

int			ft_sprintf(char *buffer, const char *format, ...);
int			ft_vsprintf(char *buffer, const char *format, va_list ap);

int			ft_snprintf(char *buffer, size_t size, const char *format, ...);
int			ft_vsnprintf(char *buffer, size_t size, const char *format, va_list ap);

int			ft_asprintf(char **ret, const char *format, ...);
int			ft_vasprintf(char **ret, const char *format, va_list ap);

#endif
