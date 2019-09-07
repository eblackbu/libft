/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:21:14 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/06 18:57:34 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;

	new_node = NULL;
	if (!(new_node = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		new_node->content = NULL;
		new_node->content_size = 0;
	}
	else
	{
		if (!(new_node->content = \
		(unsigned char*)malloc(sizeof(unsigned char) * content_size)))
		{
			free(new_node);
			return (NULL);
		}
		new_node->content_size = content_size;
		new_node->content = ft_memmove(new_node->content\
				, content, content_size);
	}
	new_node->next = NULL;
	return (new_node);
}
