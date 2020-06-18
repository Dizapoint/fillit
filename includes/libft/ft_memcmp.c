#include "libft.h"

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char			*s1_p;
	unsigned const char		*s2_p;
	int						result;

	s1_p = (unsigned char *)s1;
	s2_p = (unsigned const char *)s2;
	while (n)
	{
		if ((result = *s1_p - *s2_p) != 0)
			return (result);
		s1_p++;
		s2_p++;
		n--;
	}
	return (0);
}
