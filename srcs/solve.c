/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:21:46 by ajung             #+#    #+#             */
/*   Updated: 2022/01/26 16:37:36 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	solve_5(t_list_ps **stack_a, t_list_ps **stack_b)
{
	
}

void	solve_4(t_list_ps **stack_a, t_list_ps **stack_b)
{
	
}

void	solve_3(t_list_ps **stack_a, t_list_ps **stack_b)
{
	
}

void	what_algo(int argc, t_list_ps **stack_a, t_list_ps **stack_b)
{
	if (argc == 3)
		sa(stack_a);
	else if (argc == 4)
		solve_3(stack_a, stack_b);
	else if (argc == 5)
		solve_4(stack_a, stack_b);
	else if (argc == 6)
		solve_5(stack_a, stack_b);
	else
	{
		
	}
}
