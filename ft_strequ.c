/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:07:38 by qleon             #+#    #+#             */
/*   Updated: 2018/12/03 18:52:54 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const char *str1, const char *str2)
{
	if (str1 == NULL || str2 == NULL)
		return (0);
	return (ft_strcmp(str1, str2) == 0);
}
