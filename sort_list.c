#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*start;

	start = lst;
	while (lst && lst->next)
	{
		if (!(*cmp)(lst->data, lst->next->data))
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return (start);
}
