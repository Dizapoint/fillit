#include "tetriminos.h"

int		start_size_of_square(int *figures, int count_of_tetr)
{
	int	i;

	i = 0;
	while (i < count_of_tetr)
	{
		if (figures[i] == 1 || figures[i] == 2)
			return (4);
		if (figures[i] == 3)
			return (2);
		i++;
	}
	return (3);
}
