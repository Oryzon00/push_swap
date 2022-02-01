/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:05:39 by ajung             #+#    #+#             */
/*   Updated: 2022/02/01 16:20:51 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_list_ps **stack_a)
{
	t_list_ps	*head;
	int			min;

	head = *stack_a;
	min = head->content;
	while (head)
	{
		if (head->content < min)
			min = head->content;
		head = head->next;
	}
	return (min);
}

void	solve_3(t_list_ps **stack_a)
{
	if ((*stack_a)->content < (*stack_a)->next->content
		&& (*stack_a)->next->content > (*stack_a)->next->next->content
		&& (*stack_a)->content < (*stack_a)->next->next->content)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->next->content < (*stack_a)->next->next->content
		&& (*stack_a)->content < (*stack_a)->next->next->content)
		sa(stack_a);
	else if ((*stack_a)->content < (*stack_a)->next->content
		&& (*stack_a)->next->content > (*stack_a)->next->next->content
		&& (*stack_a)->content > (*stack_a)->next->next->content)
		rra(stack_a);
	else if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->next->content < (*stack_a)->next->next->content)
		ra(stack_a);
	else if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->next->content > (*stack_a)->next->next->content)
	{
		sa(stack_a);
		rra(stack_a);
	}
}

void	solve_4(t_list_ps **stack_a, t_list_ps **stack_b)
{
	int	min;

	min = find_min(stack_a);
	while ((*stack_a)->content != min)
	{
		if ((*stack_a)->next->content == min
			|| (*stack_a)->next->next->content == min)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	solve_3(stack_a);
	pa(stack_a, stack_b);
}

void	solve_5(t_list_ps **stack_a, t_list_ps **stack_b)
{
	int	min;
	int	i;

	i = 2;
	while (i-- > 0)
	{
		min = find_min(stack_a);
		while ((*stack_a)->content != min)
		{
			if ((*stack_a)->next->content == min
				|| (*stack_a)->next->next->content == min)
				ra(stack_a);
			else
				rra(stack_a);
		}
		pb(stack_a, stack_b);
	}
	solve_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	what_algo(int argc, t_list_ps **stack_a, t_list_ps **stack_b)
{
	if (argc == 3)
		sa(stack_a);
	else if (argc == 4)
		solve_3(stack_a);
	else if (argc == 5)
		solve_4(stack_a, stack_b);
	else if (argc == 6)
		solve_5(stack_a, stack_b);
	else
		solve(stack_a, stack_b, argc);
}
