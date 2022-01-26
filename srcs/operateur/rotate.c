/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:15:48 by ajung             #+#    #+#             */
/*   Updated: 2022/01/26 14:33:50 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list_ps **stack_a)
{
	t_list_ps	*tmp;

	if (!(*stack_a))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	ft_lstadd_back_ps(stack_a, tmp);
	write(1, "ra\n", 3);
}

void	rb(t_list_ps **stack_b)
{
	t_list_ps	*tmp;

	if (!(*stack_b))
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	ft_lstadd_back_ps(stack_b, tmp);
	write(1, "rb\n", 3);
}

void	rr(t_list_ps **stack_a, t_list_ps **stack_b)
{
	t_list_ps	*tmp;

	if (!(*stack_a))
		return ;
	if (!(*stack_b))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	ft_lstadd_back_ps(stack_a, tmp);
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	ft_lstadd_back_ps(stack_b, tmp);
	write(1, "rr\n", 3);
}
