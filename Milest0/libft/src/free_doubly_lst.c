#include "../include/libft.h"

void    free_doubly_lst(t_node **tail, t_node **head)
{
    t_node  *curr;

    if (!*tail)
        return ;
    curr = *tail;
    while (curr->next != NULL)
    {
        curr = curr->next;
        free(curr->prev);
    }
    free(curr);
    *tail = NULL;
    *head = NULL;
}

/*#include <stdio.h>

int main()
{
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
}*/
