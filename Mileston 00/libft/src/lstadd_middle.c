/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_middle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 20:13:57 by portos            #+#    #+#             */
/*   Updated: 2026/03/26 20:09:20 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void    lstadd_middle(t_list **head, int content, int position) // Double pointer Because When you insert (add) at position 1 (the very beginning), the head of the list itself changes.
{
    t_list *nw_node;
    t_list  *tmp;
    int i;
    
    i = 1;
    nw_node = ft_lstnew(content);
    if (!nw_node) //The core idea: To insert a node in the middle, you need to find the node just before your target position, then rewire two pointers.
        return ; //Let's say you have a list [A → B → C → D] and want to insert X at position 3 (between B and C).
    tmp = *head;  // only set this after you know nw_node is valid
        if (position == 1)
    {
        nw_node->next = *head; // position 1 case have to update *head that's why using *head not tmp
        *head = nw_node;
    }
    else
    {
        while (tmp && i< position -1) // position 2 invalid and stop there
        {
            tmp= tmp->next;
            i++;
        }
        nw_node->next = tmp->next; // Step 1 => X.next = B.next — Make the new node X point to C (what B was pointing to). Do this first, while you still have the reference.
        tmp->next = nw_node; // Step 2 => B.next = X — Make the position node B point to X. Only now do you "cut" B's link to C.
    }  //note : If you did Step 2 first, B would point to X, but X wouldn't point anywhere — C and D would be orphaned and lost from memory.
}
