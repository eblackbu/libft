/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:56:49 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/07 09:11:37 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen((char*)str);
	while (i > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char*)&str[i]);
		i--;
	}
	if (str[i] == c)
		return ((char*)&str[i]);
	return (NULL);
}
