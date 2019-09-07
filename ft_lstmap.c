/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:41:27 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/07 09:07:57 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;

	new_list = NULL;
	if (!(lst && (*f)))
		return (NULL);
	while (lst)
	{
		ft_lstadd_front(&new_list, (*f)(lst));
		lst = lst->next;
	}
	return (new_list);
}
