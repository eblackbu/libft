/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:56:25 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/06 15:58:41 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*arr;

	i = 0;
	if (!(arr = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i < size + 1)
		arr[i++] = 0;
	return (arr);
}
