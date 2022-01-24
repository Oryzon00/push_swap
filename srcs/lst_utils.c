/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:19:05 by ajung             #+#    #+#             */
/*   Updated: 2022/01/24 20:54:58 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_ps	*ft_lstnew_ps(int content, int index)
{
	t_list_ps	*elem;

	elem = malloc(sizeof(t_list_ps));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->index = index;
	elem->next = NULL;
	return (elem);
}

void	ft_lstadd_back_ps(t_list_ps **list, t_list_ps *new)
{
	t_list_ps	*last;

	if (*list)
	{
		last = *list;
		while (last && last->next)
			last = last->next;
		last->next = new;
	}
	else
		*list = new;
}


// void	ft_lstdelone(t_list_ps *lst)
// {
// 	if (lst)
// 	{
// 		free(lst);
// 	}
// }

// void	ft_lstclear(t_list_ps **lst)
// {
// 	t_list_ps	*next_elem;

// 	if (lst || !(*lst))
// 		return ;
// 	while (*lst && lst)
// 	{
// 		next_elem = (*lst)->next;
// 		ft_lstdelone(*lst);
// 		*lst = next_elem;
// 	}
// 	lst = NULL;
// }
