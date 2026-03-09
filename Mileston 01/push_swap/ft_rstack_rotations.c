#include "push_swap.h"

void    ft_rstack_rotations(t_list **head)
{
    t_list  *prev;
    t_list  *last;

    if (*head == NULL || (*head)->next == NULL)
        return ;
    prev = *head;
    while (prev->next != NULL)
    {
        last = prev;
        prev = prev->next;
    }
    prev->next = *head;
    last->next = NULL;
    *head = prev;
}

void    ft_a_rrotation(t_list **head)
{
    ft_rstack_rotations(head);
    write(1, "rra\n", 4);
}

void    ft_b_rrotation(t_list **head)
{
    ft_rstack_rotations(head);
    write(1, "rrb\n", 4);
}

void    ft_a_and_b_rrotation(t_list **a_head, t_list **b_head)
{
    ft_rstack_rotations(a_head);
    ft_rstack_rotations(a_head);
    write(1, "rrr\n", 4);
}