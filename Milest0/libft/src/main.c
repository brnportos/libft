#include "../include/libft.h"
#include <stdio.h>

int main()
{
    int d = 5;
    int e = 7;
    t_list  *node = ft_lstnew(&d);
    t_list  *new;

    new->next->content = &e;
    new->next->next = NULL;
    printf("%d\n", *(int *)node->content);
    ft_lstadd_front(&node, new);
    printf("%d\n", *(int *)new->next->content);

    /*
    int a = 1;
    int b = 3;
    int c = 7;

    t_node  *tail = malloc(sizeof * tail);
    if (!tail)
        return (1);
    tail->content = &a;
    tail->prev = NULL;
    tail->next = malloc(sizeof * tail);
    if (!tail)
        return (2);
    tail->next->content = &b;
    tail->next->prev = tail;
    tail->next->next = malloc(sizeof * tail);
    if (!tail)
        return (3);
    tail->next->next->content = &c;
    tail->next->next->prev = tail->next;
    tail->next->next->next = NULL;
    t_node  *head = tail->next->next;
    t_node  *curr = tail;

    while (curr != NULL)
    {
        printf("%d\n", *(int *)curr->content);
        curr = curr->next;
    }

    t_node  *curr = head;

    while (curr != NULL)
    {
        printf("%d\n", *(int *)curr->content);
        curr = curr->prev;
    }
    free_doubly_lst(&tail, &head);
    */
}