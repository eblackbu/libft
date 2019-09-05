#include <string.h>
#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen((char*)str) + 1;
	while (i > 0)
	{
		if (str[i] == c)
			return ((char*)&str[i]);
		i--;
	}
	if (str[i] == c)
		return ((char*)&str[i]);
	return (NULL);
}
