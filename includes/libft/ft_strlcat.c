#include "libft.h"

size_t		ft_strlcat(char *dest, char const *src, size_t n)
{
	size_t		i;
	size_t		a;
	size_t		dest_size;

	i = 0;
	a = 0;
	dest_size = ft_strlen(dest);
	if (n > 0 && n > dest_size)
	{
		i = dest_size;
		while (src[a] && i < n - 1)
			dest[i++] = src[a++];
		dest[i] = '\0';
		return (ft_strlen(src) + dest_size);
	}
	return (ft_strlen(src) + n);
}
