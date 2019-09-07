/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:56:01 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/07 14:05:01 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*newstr;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(newstr = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		newstr[i] = (*f)(s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
