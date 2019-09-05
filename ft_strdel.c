#include <stdlib.h>
#include "libft.h"

void	ft_strdel(char **as)
{
	if (as)
		free(*as);
	*as = NULL;
}
