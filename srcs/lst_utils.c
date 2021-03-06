/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:19:05 by ajung             #+#    #+#             */
/*   Updated: 2022/02/01 16:21:29 by ajung            ###   ########.fr       */
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

void	is_sorted(t_list_ps **stack)
{
	t_list_ps	*head;

	head = *stack;
	while (head->next)
	{
		if (head->content < head->next->content)
			head = head->next;
		else
			return ;
	}
	free_list(stack);
	exit (0);
}

int	ft_lstsize(t_list_ps **stack)
{
	int			i;
	t_list_ps	*tmp;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
