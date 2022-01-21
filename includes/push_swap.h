/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:12:00 by ajung             #+#    #+#             */
/*   Updated: 2022/01/21 19:28:31 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_listps
{
	int		content;
	int 	index;
	t_list	*next;
}				t_listps;

void		parsing(int argc, char **argv);
t_listps	*ft_lstnew_ps(int content, int index);
void		ft_lstadd_back_ps(t_listps **alst, t_listps *new);




#endif
