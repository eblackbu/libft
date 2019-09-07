/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:03:40 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/06 18:56:03 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	check_overlap(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (src++ == dst)
			return (1);
		i++;
	}
	return (0);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!((unsigned char)dst || (unsigned char)src))
		return (NULL);
	if (!(check_overlap(dst, src, len)))
		return (ft_memcpy(dst, src, len));
	i = len - 1;
	while (i > 0)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i--;
	}
	((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
	return (dst);
}
