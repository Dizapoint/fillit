#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*point;

	i = 0;
	point = (unsigned char *)str;
	while (i < len)
	{
		point[i] = (unsigned char)c;
		i++;
	}
	return ((void *)str);
}
