/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_reg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:55:13 by qleon             #+#    #+#             */
/*   Updated: 2019/08/25 11:48:54 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list	al;
	int		n;

	va_start(al, format);
	n = ft_vprintf(format, al);
	va_end(al);
	return (n);
}

int		ft_dprintf(int fd, const char *format, ...)
{
	va_list al;
	int		n;

	va_start(al, format);
	n = ft_vdprintf(fd, format, al);
	va_end(al);
	return (n);
}

int		ft_sprintf(char *buffer, const char *format, ...)
{
	va_list al;
	int		n;

	va_start(al, format);
	n = ft_vsprintf(buffer, format, al);
	va_end(al);
	return (n);
}

int		ft_snprintf(char *buffer, size_t size, const char *format, ...)
{
	va_list al;
	int		n;

	va_start(al, format);
	n = ft_vsnprintf(buffer, size, format, al);
	va_end(al);
	return (n);
}

int		ft_asprintf(char **ret, const char *format, ...)
{
	va_list al;
	int		n;

	va_start(al, format);
	n = ft_vasprintf(ret, format, al);
	va_end(al);
	return (n);
}
