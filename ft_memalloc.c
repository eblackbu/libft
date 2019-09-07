/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:53:20 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/06 11:53:22 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*arr;

	i = 0;
	if (!(arr = (void*)malloc(sizeof(unsigned char) * size)))
		return (NULL);
	while (i < size)
		((unsigned char*)arr)[i++] = 0;
	return (arr);
}
