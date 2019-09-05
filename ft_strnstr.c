#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t n;

	i = 0;
	while (s1[i] && i <= len)
	{
		if (s1[i] == s2[n])
		{
			n = 0;
			while (s1[i] == s2[n] && i <= len)
			{
				if (s2[n + 1] == '\0') 
					return ((char*)&s1[i - n]);
				i++;
				n++;
			}
		}
		i++;
	}
	return (NULL);
}	
