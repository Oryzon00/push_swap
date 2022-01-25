/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:15:52 by ajung             #+#    #+#             */
/*   Updated: 2022/01/25 19:00:13 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list_ps **stack_a)
{
	t_list_ps	*next_tmp;
	
	if (!(*stack_a) || !((*stack_a)->next))
		return ;
	next_tmp = (*stack_a)->next;
	(*stack_a)->next = (*stack_a)->next->next;
	next_tmp->next = (*stack_a);
	
}

void	swap_b(t_list_ps **stack_b)
{
	t_list_ps	*next_tmp;
	
	if (!(*stack_b) || !((*stack_b)->next))
		return ;
	next_tmp = (*stack_b)->next;
	(*stack_b)->next = (*stack_b)->next->next;
	next_tmp->next = (*stack_b);
	
}
