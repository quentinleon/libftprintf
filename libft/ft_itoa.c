/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:23:30 by qleon             #+#    #+#             */
/*   Updated: 2018/12/13 14:24:12 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_number(long num, char *str)
{
	int i;

	if (num / 10 > 0)
	{
		fill_number(num / 10, str);
	}
	i = 0;
	while (str[i])
	{
		i++;
	}
	str[i] = (num % 10) + '0';
}

char		*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		digits;

	num = (long)n;
	digits = 0;
	if (n <= 0)
		digits++;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	str = ft_strnew(digits);
	if (str == NULL)
	{
		return (NULL);
	}
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	fill_number(num, str);
	return (str);
}
