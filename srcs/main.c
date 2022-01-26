/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:49:49 by ajung             #+#    #+#             */
/*   Updated: 2022/01/26 16:54:23 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list_ps	*stack_a;
	t_list_ps	*stack_b;

	parse_arg(argc, argv, &stack_a);
	is_sorted(&stack_a);
	what_algo(argc, &stack_a, &stack_b);
	free_list(&stack_a);
	free_list(&stack_b);
}

// printf("content1 = %d, index1 = %d\n", stack_a->content, stack_a->index);
// printf("content2 = %d, index2 = %d\n", stack_a->next->content, stack_a->next->index);
// printf("content1 = %d, index1 = %d\n", stack_a->content, stack_a->index);
// printf("content2 = %d, index2 = %d\n", stack_a->next->content, stack_a->next->index);
