#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst1;
	t_list	*lst2;

	lst2 = *alst;
	while(lst2)
	{
		lst1 = lst2->next;
		del(lst2->content, lst2->content_size);
		free(lst2);
		lst2 = lst1;
	}
	*alst = NULL;
}
