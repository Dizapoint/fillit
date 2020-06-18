#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;

	new = ft_strnew(len);
	if (!new || !s)
		return (NULL);
	ft_strncpy(new, s + start, len);
	new[len] = '\0';
	return (new);
}
