#include <string.h>
#include <stdlib.h>
#include "libft.h

char			*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*newstr;

	i = 0;
	len = ft_strlen(s);
	newstr = (char*)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		newstr[i] = (*f)(s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

