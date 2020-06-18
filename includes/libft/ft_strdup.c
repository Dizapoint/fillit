#include "libft.h"

char	*ft_strdup(char const *src)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(*str) * (ft_strlen(src) + 1));
	i = 0;
	if (!str)
		return (NULL);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
