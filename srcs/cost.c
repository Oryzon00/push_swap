/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:51:55 by ajung             #+#    #+#             */
/*   Updated: 2022/01/28 18:08:46 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_ps	*if_not_found(t_list_ps **stack_b, int value)
{
	t_list_ps	*elem_a;
	t_list_ps	*biggest;

	elem_a = *stack_b;
	biggest = elem_a;
	while (elem_a)
	{
		if (elem_a->content > value && biggest->content < elem_a->content)
			biggest = elem_a;
		elem_a = elem_a->next;
	}
	return (biggest);
}

t_list_ps	*find_biggest_smaller(t_list_ps **stack_b, int value)
{
	t_list_ps	*elem_a;
	t_list_ps	*biggest;
	int			found;

	found = 0;
	elem_a = *stack_b;
	biggest = elem_a;
	while (elem_a)
	{
		if (elem_a->content < value && elem_a->content > biggest->content)
		{
			found = 1;
			biggest = elem_a;
		}
		elem_a = elem_a->next;
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

	if (!*stack_b)
	{
		//dprintf(1, "b est vide, cost order b = 0\n");
		return (0);
	}
	size = argc - 1;
	index = get_index(stack_b, find_biggest_smaller(stack_b, value));
	if (index > size / 2)
		cost = size - index;
	else
		cost = index;
	//dprintf(1, "cost_order b = %d\n", cost);
	return (cost);
}

// size - index -> rra
// index -> ra

int	cost_top_a(int argc, t_list_ps **stack_a, int index)
{
	int	size;
	int	cost;

	(void) stack_a;
	size = argc - 1;
	//dprintf(1, "size = %d\n", size);
	//dprintf(1, "index recu dans cost a = %d\n", index);
	if (index > size / 2)
		cost = size - index;
	else
		cost = index;
	//dprintf(1, "cost top a = %d\n", cost);
	return (cost);
}

int	get_cost(int argc, t_list_ps **stack_a, t_list_ps **stack_b, int index)
{
	int			cost;
	int			i;
	t_list_ps	*elem_a;

	i = 0;
	elem_a = *stack_a;
	while (i < index)
	{
		elem_a = elem_a->next;
		i++;
	}
	cost = cost_top_a(argc, stack_a, index)
		+ cost_order_b(argc, stack_b, elem_a->content);
	//dprintf(1, "content elem_a = %d\n", elem_a->content);
	return (cost);
}
