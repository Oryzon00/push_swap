/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:06:05 by ajung             #+#    #+#             */
/*   Updated: 2022/01/27 15:34:56 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	vide_b(t_list_ps **stack_a, t_list_ps **stack_b)
{
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	exec_action(t_list_ps **stack_a, t_list_ps **stack_b)
{
	
}

void	solve(t_list_ps **stack_a, t_list_ps **stack_b, int argc)
{
	int	cost;
	int min_cost;
	int	index;

	while (*stack_a) //Tant que A n'est pas vide
	{
		index = 0;
		min_cost = 2147483647;
		while (index < argc - 2) //Pour chaque element de A
		{
			if (get_cost(argc, stack_a, index) < min_cost)
				min_cost = get_cost(argc, stack_a, index);
			index++;
		}
		exec_action(stack_a, stack_b);
	}
	vide_b(stack_a, stack_b);
}
