/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:12:00 by ajung             #+#    #+#             */
/*   Updated: 2022/01/24 21:31:26 by ajung            ###   ########.fr       */
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
	int 				index;
	struct s_list_ps	*next;
}				t_list_ps;

void		parse_arg(int argc, char **argv, t_list_ps **list);
t_list_ps	*ft_lstnew_ps(int content, int index);
void		ft_lstadd_back_ps(t_list_ps **alst, t_list_ps *new);
int			check_error(char **str);
void		free_list(t_list_ps **list);
void		free_split(char **str);


#endif
