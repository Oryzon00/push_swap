/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:49:49 by ajung             #+#    #+#             */
/*   Updated: 2022/02/01 16:22:03 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	print_stack_a(t_list_ps **stack_a, t_list_ps **stack_b)
// {
// 	t_list_ps	*tmp_a;
// 	t_list_ps	*tmp_b;

// 	tmp_a = *stack_a;
// 	dprintf(1, "\nEtat de stack_a\n");

// 	while (tmp_a)
// 	{
// 		dprintf(1, "%d\n", tmp_a->content);
// 		tmp_a = tmp_a->next;
// 	}
// 	tmp_b = *stack_b;
// 	dprintf(1, "\nEtat de stack_b\n");
// 	while (tmp_b)
// 	{
// 		dprintf(1, "%d\n", tmp_b->content);
// 		tmp_b = tmp_b->next;
// 	}
// 	dprintf(1, "\n\n");
// }

int	main(int argc, char **argv)
{
	t_list_ps	*stack_a;
	t_list_ps	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	parse_arg(argc, argv, &stack_a);
	is_sorted(&stack_a);
	what_algo(argc, &stack_a, &stack_b);
	free_list(&stack_a);
	free_list(&stack_b);
}
