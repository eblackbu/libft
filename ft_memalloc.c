#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*arr;

	i = 0;
	if (!(arr = (void*)malloc(sizeof(unsigned char) * size)))
		return (NULL);
	while (i < size)
		((unsigned char*)arr)[i++] = 0;
	return (arr);
}
