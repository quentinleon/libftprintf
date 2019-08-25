/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:36:16 by qleon             #+#    #+#             */
/*   Updated: 2018/12/02 17:11:29 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **head, void (*del)(void *, size_t))
{
	t_list *node;
	t_list *next_node;

	node = *head;
	while (node)
	{
		next_node = node->next;
		ft_lstdelone(&node, del);
		node = next_node;
	}
	*head = NULL;
}
