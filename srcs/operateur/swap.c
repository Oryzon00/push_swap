/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:15:52 by ajung             #+#    #+#             */
/*   Updated: 2022/01/25 21:04:53 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list_ps **stack_a)
{
	int	content_tmp;
	int	index_tmp;

	if (!(*stack_a) || !((*stack_a)->next))
		return ;
	content_tmp = (*stack_a)->content;
	index_tmp = (*stack_a)->index;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->index = (*stack_a)->next->index;
	(*stack_a)->next->content = content_tmp;
	(*stack_a)->next->index = index_tmp;
	write(1, "sa\n", 3);
}

void	swap_b(t_list_ps **stack_b)
{
	int	content_tmp;
	int	index_tmp;

	if (!(*stack_b) || !((*stack_b)->next))
		return ;
	content_tmp = (*stack_b)->content;
	index_tmp = (*stack_b)->index;
	(*stack_b)->content = (*stack_b)->next->content;
	(*stack_b)->index = (*stack_b)->next->index;
	(*stack_b)->next->content = content_tmp;
	(*stack_b)->next->index = index_tmp;
	write(1, "sb\n", 3);
}

void	swap_ab(t_list_ps **stack_a, t_list_ps **stack_b)
{
	int	content_tmp;
	int	index_tmp;

	if (!(*stack_a) || !((*stack_a)->next))
		return ;
	if (!(*stack_b) || !((*stack_b)->next))
		return ;
	content_tmp = (*stack_a)->content;
	index_tmp = (*stack_a)->index;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->index = (*stack_a)->next->index;
	(*stack_a)->next->content = content_tmp;
	(*stack_a)->next->index = index_tmp;
	content_tmp = (*stack_b)->content;
	index_tmp = (*stack_b)->index;
	(*stack_b)->content = (*stack_b)->next->content;
	(*stack_b)->index = (*stack_b)->next->index;
	(*stack_b)->next->content = content_tmp;
	(*stack_b)->next->index = index_tmp;
	write(1, "ss\n", 3);
}
