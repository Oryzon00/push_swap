/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:51:55 by ajung             #+#    #+#             */
/*   Updated: 2022/01/27 18:15:44 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_ps	*if_not_found(t_list_ps **stack_b, int value)
{
	t_list_ps	*elem;
	t_list_ps	*biggest;

	elem = *stack_b;
	biggest = elem;
	while (elem)
	{
		if (elem->content > value && biggest->content < elem->content)
			biggest = elem;
		elem = elem->next;
	}
	return (biggest);
}

int	find_biggest_smaller(t_list_ps **stack_b, int value)
{
	t_list_ps	*elem;
	t_list_ps	*biggest;
	int			found;

	found = 0;
	elem = *stack_b;
	biggest = elem;
	while (elem)
	{
		if (elem->content < value && elem->content > biggest->content)
		{
			found = 1;
			biggest = elem;
		}
		elem = elem->next;
	}
	if (found == 0)
		biggest = if_not_found(stack_b, value);
	return (biggest);
}

int	cost_order_b(int argc, t_list_ps **stack_b, int value)
{
	int	index;
	int	size;
	int	cost;

	size = argc - 1;
	index = get_index(stack_b, find_biggest_smaller(stack_b, value));
	if (index > size / 2)
		cost = size - index;
	else
		cost = index;
	return (cost);
}

// size - index -> rra
// index -> ra

int	cost_top_a(int argc, t_list_ps **stack_a, int index)
{
	int	size;
	int	cost;

	size = argc - 1;
	if (index > size / 2)
		cost = size - index;
	else
		cost = index;
	return (cost);
}

int	get_cost(int argc, t_list_ps **stack_a, t_list_ps **stack_b, int index)
{
	int			cost;
	t_list_ps	*elem;

	while (index)
	{
		elem = elem->next;
		index--;
	}
	cost = cost_top_a(argc, stack_a, index)
		+ cost_order_b(argc, stack_b, elem->content);
	return (cost);
}
