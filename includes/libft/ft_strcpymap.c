#include "libft.h"

char	**ft_strcpymap(char const *s, char **m, char c)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (!s && !m)
		return (NULL);
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s != c)
		{
			m[i][a] = *s;
			a++;
		}
		else if (*s == c && *(s + 1) != '\0' && *(s + 1) != c)
		{
			i++;
			a = 0;
		}
		s++;
	}
	return (m);
}
