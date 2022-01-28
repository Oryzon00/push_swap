/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:06:05 by ajung             #+#    #+#             */
/*   Updated: 2022/01/28 18:55:38 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	vide_b(t_list_ps **stack_a, t_list_ps **stack_b)
{
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	exec_action(t_list_ps **stack_a, t_list_ps **stack_b, int index_pb,
			int argc)
{
	int	size;

	size = argc - 1;
	if (index_pb)
	{
		if (index_pb > size / 2)
		{
			while (index_pb--)
				rra(stack_a);
			//rra size - index fois
		}
		else
		{
			//probleme ici, fais plein de ra quand index = 0
			while ((size - index_pb++))
				ra(stack_a);
		}
	}
	pb(stack_a, stack_b);
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
			//dprintf(1, "index = %d\n", i); //
			cost = get_cost(argc, stack_a, stack_b, i);
			dprintf(1, "cost total = %d\n\n", cost); //
			if (cost < min_cost)
			{
				min_cost = cost;
				index_pb = i;
				dprintf(1, "!!!!!index_pb = %d!!!!!!!\n\n", index_pb);
			}
			i++;
		}
		argc--;
		dprintf(1, "\n\n!!!!!!!!!!fin boucle!!!!!!!!!!!\n\n");
		exec_action(stack_a, stack_b, index_pb, argc);
	}
	vide_b(stack_a, stack_b);
}
