#include "libft.h"

void	ft_putendl(char const *s, int fd)
{
	ft_putstr(s, fd);
	ft_putchar('\n', fd);
}
