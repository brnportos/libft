#include "push_swap.h"
#include <stdio.h>

t_list  *ft_lstnew(int content);
void	ft_lstadd_back(t_list **head, t_list *new);
void	print_list(t_list *head);
int main()
{
    t_list	*a = NULL;
	t_list	*b = NULL;

	ft_lstadd_back(&a, ft_lstnew(1));
	ft_lstadd_back(&a, ft_lstnew(2));
	ft_lstadd_back(&a, ft_lstnew(3));

	ft_lstadd_back(&b, ft_lstnew(10));
	ft_lstadd_back(&b, ft_lstnew(20));
	ft_lstadd_back(&b, ft_lstnew(30));

    
    print_list(a);
    ft_a_rotation(&a);
    print_list(a);

    print_list(b);
    ft_b_rotation(&b);
    print_list(b);

    print_list(a);
    print_list(b);
    ft_a_and_b_rotation(&a, &b);
    print_list(a);
    print_list(b);
}
t_list  *ft_lstnew(int content)
{
    t_list  *new_node;

    if (!content)
        return (NULL);
    new_node = malloc(sizeof * new_node);
    if (new_node == NULL)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}

void	ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*temp;

	if (!*head)
	{
		*head = new;
		return;
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
void	print_list(t_list *head)
{
	while (head)
	{
		printf("%d ->\n", head->content);
		head = head->next;
	}
}

