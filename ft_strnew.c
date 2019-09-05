#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*arr;

	i = 0;
	if(!(arr = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
		arr[i++] = 0;
	return (arr);
}
