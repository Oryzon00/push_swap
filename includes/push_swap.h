/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:12:00 by ajung             #+#    #+#             */
/*   Updated: 2022/02/01 17:27:20 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_list_ps
{
	int					content;
	int					index;
	struct s_list_ps	*next;
}				t_list_ps;

void		parse_arg(int argc, char **argv, t_list_ps **list);
t_list_ps	*ft_lstnew_ps(int content, int index);
void		ft_lstadd_back_ps(t_list_ps **alst, t_list_ps *new);
int			check_error(char **str);
void		free_list(t_list_ps **list);
void		is_sorted(t_list_ps **stack);
void		what_algo(int argc, t_list_ps **stack_a, t_list_ps **stack_b);
void		solve(t_list_ps **stack_a, t_list_ps **stack_b, int argc);
int			get_index(t_list_ps **stack_b, t_list_ps *biggest);
int			get_cost(int argc, t_list_ps **stack_a, t_list_ps **stack_b,
				int index);
t_list_ps	*find_biggest_smaller(t_list_ps **stack_b, int value);
t_list_ps	*if_not_found(t_list_ps **stack_b, int value);
int			ft_lstsize(t_list_ps **stack);
int			index_to_value(t_list_ps **stack, int index);
void		put_min_on_top(t_list_ps **stack_a);

/*Operateur*/
void		sa(t_list_ps **stack_a);
void		sb(t_list_ps **stack_b);
void		ss(t_list_ps **stack_a, t_list_ps **stack_b);
void		pa(t_list_ps **stack_a, t_list_ps **stack_b);
void		pb(t_list_ps **stack_a, t_list_ps **stack_b);
void		ra(t_list_ps **stack_a);
void		rb(t_list_ps **stack_b);
void		rr(t_list_ps **stack_a, t_list_ps **stack_b);
void		rra(t_list_ps **stack_a);
void		rrb(t_list_ps **stack_b);
void		rrr(t_list_ps **stack_a, t_list_ps **stack_b);

//debugging
void		print_stack_a(t_list_ps **stack_a, t_list_ps **stack_b);

#endif
