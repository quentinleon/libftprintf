/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:28:38 by qleon             #+#    #+#             */
/*   Updated: 2019/08/25 16:15:31 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "printf_utils.h"
# include "strbuilder.h"
# include "libft.h"

t_str	*format_print(const char *format, va_list ap);

int		ft_printf(const char *format, ...);
int		ft_vprintf(const char *format, va_list ap);

int		ft_dprintf(int fd, const char *format, ...);
int		ft_vdprintf(int fd, const char *format, va_list ap);

int		ft_sprintf(char *buffer, const char *format, ...);
int		ft_vsprintf(char *buffer, const char *format, va_list ap);

int		ft_snprintf(char *buffer, size_t size, const char *format, ...);
int		ft_vsnprintf(char *buffer, size_t size, const char *format, va_list ap);

int		ft_asprintf(char **ret, const char *format, ...);
int		ft_vasprintf(char **ret, const char *format, va_list ap);

#endif
