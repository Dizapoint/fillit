#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	unsigned char	*point;

	point = (unsigned char *)s;
	while (n)
	{
		if (*point == (unsigned char)c)
			return ((void *)point);
		point++;
		n--;
	}
	return (NULL);
}
