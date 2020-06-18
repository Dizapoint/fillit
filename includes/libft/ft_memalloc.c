#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new;

	new = (void *)malloc(sizeof(void) * size);
	if (!new)
		return (NULL);
	ft_bzero(new, size);
	return (new);
}
