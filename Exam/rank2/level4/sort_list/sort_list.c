#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*curr;
	int	tmp;
	t_list	*node;

	if (!lst || !cmp)
		return (NULL);
	curr = lst;

	while (curr)
	{
		node = curr->next;
		while (node)
		{
			if (cmp(curr->data, node->data) == 0)
			{
				tmp = curr->data;
				curr->data = node->data;
				node->data = tmp;
			}
			node = node->next;
		}
		curr = curr->next;
	}
	return (lst);
}
