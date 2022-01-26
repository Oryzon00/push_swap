/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:15:24 by ajung             #+#    #+#             */
/*   Updated: 2022/01/26 14:32:32 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list_ps **stack_a, t_list_ps **stack_b)
{
	t_list_ps	*tmp;

	if (!(*stack_b))
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_a);
	(*stack_a) = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_list_ps **stack_a, t_list_ps **stack_b)
{
	t_list_ps	*tmp;

	if (!(*stack_a))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_b);
	(*stack_b) = tmp;
	write(1, "pb\n", 3);
}
