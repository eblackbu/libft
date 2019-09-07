/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 08:54:28 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/07 08:57:41 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*current_node;

	current_node = *alst;
	if (!current_node)
		*alst = new;
	else
	{
		while (current_node->next)
			current_node = current_node->next;
		current_node->next = new;
	}
}
