#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	size_t			i;
	unsigned char	*p_src;
	unsigned char	*p_dest;

	i = 0;
	if (!src && n == 0)
		return ((void *)dest);
	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return ((void *)dest);
}
