/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:19:05 by ajung             #+#    #+#             */
/*   Updated: 2022/01/21 19:30:02 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_listps	*ft_lstnew_ps(int content, int index)
{
	t_listps	*elem;

	elem = malloc(sizeof(t_listps));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->index = index;
	elem->next = NULL;
	return (elem);
}

void	ft_lstadd_back_ps(t_listps **alst, t_listps *new)
{
	t_listps	*last;

	if (*alst)
	{
		last = *alst;
		while (last && last->next)
			last = last->next;
		last->next = new;
	}
	else
		*alst = new;
}
