#include "libft.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	unsigned const char *p_s1;
	unsigned const char *p_s2;
	int					i;

	i = 0;
	p_s1 = (unsigned const char *)s1;
	p_s2 = (unsigned const char *)s2;
	while ((p_s1[i] != '\0' || p_s2[i] != '\0') && n)
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		i++;
		n--;
	}
	return (0);
}
