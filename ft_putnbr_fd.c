/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 23:50:20 by qleon             #+#    #+#             */
/*   Updated: 2018/12/03 14:15:20 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	int n;
	int digit;

	n = num;
	digit = num % 10;
	num /= 10;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		digit *= -1;
		num *= -1;
	}
	if (num > 0)
	{
		ft_putnbr_fd(num, fd);
	}
	ft_putchar_fd(digit + '0', fd);
}
