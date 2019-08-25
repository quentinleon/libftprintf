/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:44:15 by qleon             #+#    #+#             */
/*   Updated: 2018/12/03 15:10:21 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;
	t_list *prev_node;
	t_list *node;
	t_list *new_node;

	new_list = NULL;
	node = lst;
	while (node)
	{
		new_node = f(node);
		if (new_list == NULL)
		{
			new_list = new_node;
			prev_node = new_list;
		}
		else
		{
			prev_node->next = new_node;
			prev_node = prev_node->next;
		}
		node = node->next;
	}
	return (new_list);
}
