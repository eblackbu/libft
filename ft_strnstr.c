/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:56:33 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/07 14:30:46 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t n;

	i = 0;
	n = 0;
	if ((*s1 == '\0' && *s2 == '\0') || *s2 == '\0')
		return ((char*)s1);
	while (s1[i] && i < len)
	{
		n = 0;
		if (s1[i] == s2[n])
		{
			while (s1[i] == s2[n] && s1[i] && i < len)
			{
				if (s2[n + 1] == '\0')
					return ((char*)&s1[i - n]);
				i++;
				n++;
			}
			i -= n;
		}
		i++;
	}
	return (NULL);
}
