/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 18:08:20 by eblackbu          #+#    #+#             */
/*   Updated: 2019/10/06 18:08:25 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
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
