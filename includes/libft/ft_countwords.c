#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	int		i;

	i = 0;
	if (!str)
		return (0);
	while (*str == c)
		str++;
	if (*str != c)
		i++;
	while (*str)
	{
		if (*str == c && *(str + 1) != c && *(str + 1) != '\0')
			i++;
		str++;
	}
	return (i);
}
