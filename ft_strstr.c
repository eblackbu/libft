#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	n;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[n])
		{
            n = 0;
			while (s1[i] == s2[n])
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
