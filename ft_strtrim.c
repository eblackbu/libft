#include <string.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_strlen_spec(char const *s)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] == 32 || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i])
	{
		i++;
		len++;
	}
	if (len)
	{
		while (s[i - 1] == 32 || s[i - 1] == '\n' || s[i - 1] == '\t')
		{
			i--;
			len--;
		}
	}
	return (len);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t 	len;
	char	*newstr;

	i = 0;
	j = 0;
	len = ft_strlen_spec(s);
	if (!(newstr = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i] == 32 || s[i] == '\n' || s[i] == '\t')
		i++;
	while (j < len)
	{
		newstr[j] = s[i + j];
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
