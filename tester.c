/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:28:48 by qleon             #+#    #+#             */
/*   Updated: 2019/08/27 20:19:25 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "libftprintf.h"

void	test_both(const char *fmt, ...)
{
	va_list	al;

	va_start(al, fmt);
	write(1, " ", 1);
	vprintf(fmt, al);
	va_end(al);

	va_start(al, fmt);
	write(1, ">", 1);
	ft_vprintf(fmt, al);
	va_end(al);
}

int		main(int c, char **v)
{
	test_both("%-5c", '');
	/*test_both("|%2c|%05c|%-5c|\n", 'a', 'b', 'c');
	test_both("|%s|%05s|%-5s|\n", "hi", "hi", "hi");

	int		x = 10;
	char	*y = malloc(1000);
	int		z = 1;
	test_both("|%p|%p|%p|\n", &x, y, &z);
	free(y);

	test_both("|%r|%5%|\n");

	test_both("|%i|%8.5i|%i|\n", 123, -123, 0);
	test_both("|%0+6i|%li|%hhi|\n", 123, -123, 400);

	test_both("|%0+6u|%8.5u|%u|\n", 123, 123, -123);

	test_both("|%.0i|%.0u|%+.0i|\n", 0, 0, 0);

	test_both("% 03.0i\n", 0);
	test_both("%08.3u\n", 8375);

	test_both("|%#-5.0o|\n", 0);

	test_both("|%f|%f|\n", 123.456, -123.456);

	//test_both("|%i|%8.5i|%i|\n", 123, -123, 0);
	//%0+# 123.123hhp*/
	return (0);
}
