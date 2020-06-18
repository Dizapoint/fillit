#include "libft.h"

int		ft_strcmp(char const *str1, char const *str2)
{
	size_t					i;
	unsigned const char		*p_s1;
	unsigned const char		*p_s2;

	i = 0;
	p_s1 = (unsigned const char *)str1;
	p_s2 = (unsigned const char *)str2;
	while (p_s1[i] != '\0' && p_s2[i] != '\0')
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		i++;
	}
	return (p_s1[i] - p_s2[i]);
}
