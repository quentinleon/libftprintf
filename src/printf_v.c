/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_v.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:00:48 by qleon             #+#    #+#             */
/*   Updated: 2019/08/25 18:09:02 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_vprintf(const char *format, va_list ap)
{
	t_str	*str;
	int		n;

	str = format_print(format, ap);
	n = str->len;
	write(1, str->str, str->len);
	free(str->str);
	free(str);
	return (n);
}

int		ft_vdprintf(int fd, const char *format, va_list ap)
{
	t_str	*str;
	int		n;

	str = format_print(format, ap);
	n = str->len;
	write(fd, str->str, str->len);
	free(str->str);
	free(str);
	return (n);
}

int		ft_vsprintf(char *buffer, const char *format, va_list ap)
{
	t_str	*str;
	int		n;

	str = format_print(format, ap);
	n = str->len;
	ft_strncpy(buffer, str->str, str->len + 1);
	free(str->str);
	free(str);
	return (n);
}

int		ft_vsnprintf(char *buffer, size_t size, const char *format, va_list ap)
{
	t_str	*str;
	int		n;

	str = format_print(format, ap);
	n = str->len;
	if (str->len + 1 < size)
		size = str->len + 1;
	ft_strncpy(buffer, str->str, size);
	free(str->str);
	free(str);
	return (n);
}

int		ft_vasprintf(char **ret, const char *format, va_list ap)
{
	t_str	*str;
	int		n;

	str = format_print(format, ap);
	n = str->len;
	*ret = malloc(sizeof(char) * str->len + 1);
	ft_strncpy(*ret, str->str, str->len + 1);
	free(str->str);
	free(str);
	return (n);
}
