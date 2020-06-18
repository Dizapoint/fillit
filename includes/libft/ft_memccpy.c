#include "libft.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	size_t				i;
	unsigned const char	*p_src;
	unsigned char		*p_dest;

	i = 0;
	p_src = (unsigned const char *)src;
	p_dest = (unsigned char *)dest;
	while (i < n)
	{
		*p_dest++ = *p_src;
		if (*p_src++ == (unsigned char)c)
			return ((void *)p_dest);
		i++;
	}
	return (NULL);
}
