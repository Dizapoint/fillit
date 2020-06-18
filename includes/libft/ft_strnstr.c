#include "libft.h"

char	*ft_strnstr(char const *h, char const *n, size_t l)
{
	if (!n && !h && l == 0)
		return (NULL);
	while (*h)
	{
		if (l < ft_strlen(n))
			break ;
		if (ft_strlen(h) < ft_strlen(n))
			break ;
		if (ft_memcmp(h, n, ft_strlen(n)) == 0)
			return ((char *)h);
		h++;
		l--;
	}
	return (NULL);
}
