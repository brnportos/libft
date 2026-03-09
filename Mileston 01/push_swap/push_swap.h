/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:25:31 by brportos          #+#    #+#             */
/*   Updated: 2026/03/09 12:30:57 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}					t_list;

void	ft_a_rotation(t_list **head);
void	ft_b_rotation(t_list **head);
void	ft_a_and_b_rotation(t_list **a_head, t_list **b_head);
void    ft_rstack_rotations(t_list **head);
void    ft_a_rrotation(t_list **head);
void    ft_b_rrotation(t_list **head);
void    ft_a_and_b_rrotation(t_list **a_head, t_list **b_head);

#endif