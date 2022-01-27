/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:51:55 by ajung             #+#    #+#             */
/*   Updated: 2022/01/27 15:47:14 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cost_order_b(int argc, t_list_ps **stack_b, int value)
{
	
}

int	cost_top_a (int argc, t_list_ps **stack_a, int index)
{
	int	size;
	int	cost;

	size = argc - 1;
	if (index > size / 2)	//rra
		cost = size - index;
	else 					//ra
		cost = index;
	return (cost);
		
}

int	get_cost(int argc, t_list_ps **stack_a, t_list_ps **stack_b, int index)
{
	int	cost;
	t_list_ps *elem;

	while (index)
	{
		elem = elem->next;
		index--;
	}
	cost = cost_top_a(argc, stack_a, index) +
		cost_order_b(argc, stack_b, elem->content);
	return (cost);
}
