/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:12:00 by ajung             #+#    #+#             */
/*   Updated: 2022/01/25 21:40:58 by ajung            ###   ########.fr       */
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
void		free_split(char **str);

/*Operateur*/
void		swap_a(t_list_ps **stack_a);
void		swap_b(t_list_ps **stack_b);
void		swap_ab(t_list_ps **stack_a, t_list_ps **stack_b);
void		push_a(t_list_ps **stack_a, t_list_ps **stack_b);
void		push_b(t_list_ps **stack_a, t_list_ps **stack_b);
void		rotate_a(t_list_ps **stack_a);
void		rotate_b(t_list_ps **stack_b);
void		rotate_ab(t_list_ps **stack_a, t_list_ps **stack_b);
void		reverse_rotate_a(t_list_ps **stack_a);
void		reverse_rotate_b(t_list_ps **stack_b);
void		reverse_rotate_ab(t_list_ps **stack_a, t_list_ps **stack_b);

#endif
