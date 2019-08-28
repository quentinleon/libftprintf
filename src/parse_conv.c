/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 13:25:23 by qleon             #+#    #+#             */
/*   Updated: 2019/08/27 19:14:51 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

int		parse_flags(const char *fs, int *l)
{
	int flags;

	flags = 0;
	while (fs[*l] && (fs[*l] == '-' || fs[*l] == '+' || fs[*l] == ' ' ||
			fs[*l] == '#' || (fs[*l] == '0')))
	{
		if (fs[*l] == '-')
			flags |= MINUS;
		else if (fs[*l] == '+')
			flags |= PLUS;
		else if (fs[*l] == ' ')
			flags |= SPACE;
		else if (fs[*l] == '#')
			flags |= HASH;
		else if (fs[*l] == '0')
			flags |= ZERO;
		(*l)++;
	}
	return (flags);
}

int		parse_width(const char *fs, int *l)
{
	int width;

	width = 0;
	while (fs[*l] && (fs[*l] >= '0' && fs[*l] <= '9'))
	{
		width *= 10;
		width += fs[*l] - '0';
		(*l)++;
	}
	return (width);
}

int		parse_precision(const char *fs, int *l)
{
	int precision;

	precision = -1;
	if (fs[*l] && fs[*l] == '.')
	{
		precision = 0;
		(*l)++;
		while (fs[*l] && (fs[*l] >= '0' && fs[*l] <= '9'))
		{
			precision *= 10;
			precision += fs[*l] - '0';
			(*l)++;
		}
	}
	return (precision);
}

int		parse_length(const char *fs, int *l)
{
	int length;

	length = 0;
	if (ft_strncmp("hh", &(fs[*l]), 2) == 0)
		length = HH;
	else if (ft_strncmp("ll", &(fs[*l]), 2) == 0)
		length = LL;
	else if (ft_strncmp("h", &(fs[*l]), 1) == 0)
		length = H;
	else if (ft_strncmp("l", &(fs[*l]), 1) == 0)
		length = L;
	else if (ft_strncmp("j", &(fs[*l]), 1) == 0)
		length = J;
	else if (ft_strncmp("z", &(fs[*l]), 1) == 0)
		length = Z;
	else if (ft_strncmp("t", &(fs[*l]), 1) == 0)
		length = T;
	else if (ft_strncmp("L", &(fs[*l]), 1) == 0)
		length = BIGL;
	if (length > 0)
		(*l)++;
	if (length == HH || length == LL)
		(*l)++;
	return (length);
}

t_conv	parse_conversion(const char *fs, int *l)
{
	t_conv conv;

	*l = 0;
	conv.flags = parse_flags(fs, l);
	conv.width = parse_width(fs, l);
	conv.precision = parse_precision(fs, l);
	conv.length = parse_length(fs, l);
	conv.specifier = 0;
	if (fs[*l])
	{
		conv.specifier = fs[*l];
		(*l)++;
	}
	return (conv);
}
