/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:28:48 by qleon             #+#    #+#             */
/*   Updated: 2019/08/25 20:55:03 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int		main(int c, char **v)
{
	ft_printf("|%2c|%5c|%-5c|\n", 'a', 'b', 'c');
	ft_printf("|%s|%5s|%-5s|\n", "hi", "hi", "hi");

	int		x = 10;
	char	*y = malloc(1000);
	int		z = 1;
	ft_printf("|%14p|%14p|%14p|\n", &x, y, &z);
	printf("|%p|%p|%p|\n", &x, y, &z);
	free(y);
	
	printf("|%r|%5%|\n");
	ft_printf("|%r|%5%|\n");
	//%0+# 123.123hhp
	return (0);
}
