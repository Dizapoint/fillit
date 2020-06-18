#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*lsnext;

	while (*alst)
	{
		lsnext = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = lsnext;
	}
	*alst = NULL;
}
