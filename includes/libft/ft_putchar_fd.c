#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char a;

	a = (unsigned char)c;
	write(fd, &a, 1);
}
