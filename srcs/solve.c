/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:06:05 by ajung             #+#    #+#             */
/*   Updated: 2022/02/01 16:23:00 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	vide_b(t_list_ps **stack_a, t_list_ps **stack_b)
{
	while (*stack_b)
		pa(stack_a, stack_b);
	put_min_on_top(stack_a);
}

void	push_b_elem(t_list_ps **stack_a, t_list_ps **stack_b, int index_pb,
			int argc)
{
	int	size;

	size = argc;
	if (index_pb)
	{
		if (index_pb > size / 2)
		{
			while ((size - index_pb++ > 0))
				rra(stack_a);
		}
		else
		{
			while (index_pb--)
				ra(stack_a);
		}
	}
	pb(stack_a, stack_b);
}

void	move_b(t_list_ps **stack_b, int value_elem_a, int argc)
{
	int	index;
	int	size;

	(void) argc;
	index = get_index(stack_b, find_biggest_smaller(stack_b, value_elem_a));
	size = ft_lstsize(stack_b);
	if (index == 0)
		return ;
	if (index > size / 2)
	{
		while (size - index++ > 0)
			rrb(stack_b);
	}
	else
		while (index--)
			rb(stack_b);
}

void	solve(t_list_ps **stack_a, t_list_ps **stack_b, int argc)
{
	int	cost;
	int	min_cost;
	int	i;
	int	index_pb;

	while (*stack_a)
	{
		i = 0;
		index_pb = 0;
		min_cost = 2147483647;
		while (i < argc - 1)
		{
			cost = get_cost(argc, stack_a, stack_b, i);
			if (cost < min_cost)
			{
				min_cost = cost;
				index_pb = i;
			}
			i++;
		}
		argc--;
		move_b(stack_b, index_to_value(stack_a, index_pb), argc);
		push_b_elem(stack_a, stack_b, index_pb, argc);
	}
	vide_b(stack_a, stack_b);
}
