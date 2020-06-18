#include "libft.h"

char	*ft_strncat(char *dest, char const *src, size_t len)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
		i++;
	while (src[a] != '\0' && len)
	{
		dest[i] = src[a];
		i++;
		a++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}
