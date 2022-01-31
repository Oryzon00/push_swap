/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:51:55 by ajung             #+#    #+#             */
/*   Updated: 2022/01/31 20:54:34 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_ps	*if_not_found(t_list_ps **stack_b, int value)
{
	t_list_ps	*elem_b;
	t_list_ps	*biggest;

	elem_b = *stack_b;
	biggest = elem_b;
	while (elem_b)
	{
		if (elem_b->content > value && biggest->content < elem_b->content)
			biggest = elem_b;
		elem_b = elem_b->next;
	}
	return (biggest);
}

t_list_ps	*find_biggest_smaller(t_list_ps **stack_b, int value)
{
	t_list_ps	*elem_b;
	t_list_ps	*biggest;
	int			found;

	found = 0;
	biggest = NULL;
	elem_b = *stack_b;
	while (elem_b)
	{
		if (!biggest && elem_b->content < value)
		{
			found = 1;
			biggest = elem_b;
		}
		else if (elem_b->content < value && elem_b->content > biggest->content)
		{
			found = 1;
			biggest = elem_b;
		}
		elem_b = elem_b->next;
	}
	if (found == 0)
		biggest = if_not_found(stack_b, value);
	return (biggest);
}

int	cost_order_b(t_list_ps **stack_b, int value)
{
	int	index;
	int	size;
	int	cost;

	if (!*stack_b)
	{
		//dprintf(1, "b est vide, cost order b = 0\n");
		return (0);
	}
	size = ft_lstsize(stack_b);
	////dprintf(1, "size de b = %d\n", size);
	index = get_index(stack_b, find_biggest_smaller(stack_b, value));
	//dprintf(1, "=====index du nb a mettre en haut B = %d=====\n", index);
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
	//////dprintf(1, "size = %d\n", size);
	//////dprintf(1, "index recu dans cost a = %d\n", index);
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
		+ cost_order_b(stack_b, elem_a->content);
	////dprintf(1, "content elem_a = %d\n", elem_a->content);
	return (cost);
}
