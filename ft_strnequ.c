/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:09:31 by qleon             #+#    #+#             */
/*   Updated: 2018/11/30 13:28:29 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *str1, const char *str2, size_t num)
{
	if (str1 == NULL || str2 == NULL)
		return (0);
	if (ft_strncmp(str1, str2, num) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
