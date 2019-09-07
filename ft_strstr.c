/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:57:04 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/06 18:55:30 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if ((*s1 == '\0' && *s2 == '\0') || *s2 == '\0')
		return ((char*)s1);
	while (s1[i])
	{
		n = 0;
		if (s1[i] == s2[n])
		{
			while (s1[i] == s2[n])
			{
				if (s2[n + 1] == '\0' || s2[n] == '\0')
					return ((char*)(s1 + i - n));
				i++;
				n++;
			}
			i -= n;
		}
		i++;
	}
	return (NULL);
}
