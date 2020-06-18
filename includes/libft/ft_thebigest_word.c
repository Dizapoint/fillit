#include "libft.h"

int		ft_thebigest_word(char const *str, char c)
{
	int		max;
	int		word;

	max = 0;
	word = 0;
	if (!str)
		return (0);
	while (*str == c)
		str++;
	while (*str)
	{
		if (*str != c)
			word++;
		if (*str == c && *(str + 1) != c && *(str + 1) != '\0')
		{
			if (max < word)
				max = word;
			word = 0;
		}
		str++;
	}
	return (max);
}
