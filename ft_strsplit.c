/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:56:57 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/07 14:11:46 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static unsigned int	count_words(const char *str, char separator)
{
	size_t			i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != separator)
		{
			count++;
			while (str[i] != separator && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char			*ft_new_str(const char *str, char separator)
{
	size_t			i;
	size_t			len;
	char			*newstr;

	i = 0;
	len = 0;
	while (str[len] != separator)
		len++;
	if (!(newstr = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

static	char		**free_list(char **list)
{
	unsigned int	i;

	i = 0;
	while (list[i])
		free(list[i++]);
	free(list);
	return (NULL);
}

char				**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	words;
	char			**list;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	if (!(list = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	while (i < words)
	{
		while (s[j] == c)
			j++;
		if (!(list[i] = ft_new_str(&s[j], c)))
			return (free_list(list));
		j += (unsigned int)ft_strlen(list[i]);
		i++;
	}
	list[i] = NULL;
	return (list);
}
