#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*cmp;

	cmp = new;
	cmp->next = *alst;
	*alst = cmp;
}
