/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_statck_rotations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:33:20 by brportos          #+#    #+#             */
/*   Updated: 2026/03/09 13:27:22 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_rotations(t_list **head)
{
	t_list	*last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = *head;
	*head = (*head)->next;
	last->next->next = NULL;
}

void	ft_a_rotation(t_list **head)
{
	ft_stack_rotations(head);
	write(1, "ra\n", 3);
}

void	ft_b_rotation(t_list **head)
{
	ft_stack_rotations(head);
	write(1, "rb\n", 3);
}

void	ft_a_and_b_rotation(t_list **a_head, t_list **b_head)
{
	ft_stack_rotations(a_head);
	ft_stack_rotations(b_head);
	write(1, "rr\n", 3);
}