/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:29:30 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/07 08:44:03 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (*alst)
	{
		while ((*alst)->next)
		{
			tmp = (*alst)->next;
			ft_lstdelone(&(*alst), (*del));
			*alst = tmp;
		}
		ft_lstdelone(&(*alst), (*del));
	}
}
