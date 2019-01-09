/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_ci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:59:55 by qleon             #+#    #+#             */
/*   Updated: 2018/12/03 19:45:19 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp_ci(const char *str1, const char *str2)
{
	int i;

	i = 0;
	while (ft_tolower(str1[i]) || ft_tolower(str2[i]))
	{
		if (ft_tolower(str1[i]) != ft_tolower(str2[i]))
		{
			return (ft_tolower(str1[i]) - ft_tolower(str2[i]));
		}
		i++;
	}
	return (0);
}
