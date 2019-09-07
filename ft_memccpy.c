/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:28:54 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/06 14:06:48 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int symbol, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n && ((unsigned char*)src)[i] != (unsigned char)symbol)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		return (dest + i + 1);
	}
}
