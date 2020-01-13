/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:22:01 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/06 13:54:27 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;

	if (!(src || dest))
		return (NULL);
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
