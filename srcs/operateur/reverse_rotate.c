/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:15:43 by ajung             #+#    #+#             */
/*   Updated: 2022/01/26 14:34:06 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_ps	*find_avant_dernier(t_list_ps *stack)
{

	while (stack->next->next)
		stack = stack->next;
	return (stack);
}

void	rra(t_list_ps **stack_a)
{
	t_list_ps	*tmp;

	if (!(*stack_a) && (!(*stack_a)->next))
		return ;
	tmp = find_avant_dernier(*stack_a);
	tmp->next->next = *stack_a;
	*stack_a = tmp->next;
	tmp->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_list_ps **stack_b)
{
	t_list_ps	*tmp;

	if (!(*stack_b) && (!(*stack_b)->next))
		return ;
	tmp = find_avant_dernier(*stack_b);
	tmp->next->next = *stack_b;
	*stack_b = tmp->next;
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_list_ps **stack_a, t_list_ps **stack_b)
{
	t_list_ps	*tmp;

	if (!(*stack_a) && (!(*stack_a)->next))
		return ;
	if (!(*stack_b) && (!(*stack_b)->next))
		return ;
	tmp = find_avant_dernier(*stack_a);
	tmp->next->next = *stack_a;
	*stack_a = tmp->next;
	tmp->next = NULL;
	tmp = find_avant_dernier(*stack_b);
	tmp->next->next = *stack_b;
	*stack_b = tmp->next;
	tmp->next = NULL;
	write(1, "rrr\n", 4);
}
