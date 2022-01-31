/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:06:05 by ajung             #+#    #+#             */
/*   Updated: 2022/01/31 20:55:03 by ajung            ###   ########.fr       */
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
	//probleme ici
	//dprintf(1, "------size de a = %d, index_pb = %d----------\n\n", size, index_pb);
	if (index_pb)
	{
		if (index_pb > size / 2)
		{
			//probleme ici?
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

void move_b(t_list_ps **stack_b, int value_elem_a, int argc)
{
	int	index;
	int	size;

	(void) argc;

	index = get_index(stack_b, find_biggest_smaller(stack_b, value_elem_a));
	size = ft_lstsize(stack_b);
	////dprintf(1, "index_b=%d, size de b=%d\n", index, size);
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

	//print_stack_a(stack_a, stack_b);

	while (*stack_a)
	{
		i = 0;
		index_pb = 0;
		min_cost = 2147483647;
		while (i < argc - 1)
		{
			//dprintf(1, "index ou on regarde dans A = %d\n", i); 
			cost = get_cost(argc, stack_a, stack_b, i);
			//dprintf(1, "cost total = %d\n\n", cost);
			if (cost < min_cost)
			{
				min_cost = cost;
				index_pb = i;
				//dprintf(1, "---index_elem_min = %d----\n\n", index_pb);
			}
			i++;
		}
		argc--;
		//dprintf(1, "\n-----fin boucle-------\n\n");
		move_b(stack_b, index_to_value(stack_a, index_pb), argc);
		push_b_elem(stack_a, stack_b, index_pb, argc);
		//print_stack_a(stack_a, stack_b);
	}
	vide_b(stack_a, stack_b);
}
