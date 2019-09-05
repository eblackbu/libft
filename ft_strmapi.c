#include <string.h>
#include <stdlib.h>
#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*newstr;

	i = 0;
	len = ft_strlen(s);
	newstr = (char*)malloc(sizeof(char) * (len + 1));
	while (i < (unsigned int)len)
	{
		newstr[i] = (*f)(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
