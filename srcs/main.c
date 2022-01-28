/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:49:49 by ajung             #+#    #+#             */
/*   Updated: 2022/01/28 17:55:43 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
