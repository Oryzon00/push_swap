/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:13:17 by ajung             #+#    #+#             */
/*   Updated: 2022/02/01 18:02:39 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_list_ps **stack_b, t_list_ps *biggest)
{
	int			index;
	t_list_ps	*elem;

	index = 0;
	elem = *stack_b;
	while (elem)
	{
		if (elem->content == biggest->content)
			return (index);
		index++;
		elem = elem->next;
	}
	return (index);
}

int	index_to_value(t_list_ps **stack, int index)
{
	t_list_ps	*tmp;

	tmp = *stack;
	while (index--)
		tmp = tmp->next;
	return (tmp->content);
}

//opti ici

int	value_to_index(t_list_ps **stack, int value)
{
	t_list_ps	*tmp;
	int			index;

	index = 0;
	tmp = *stack;
	while (tmp->content != value)
	{
		index++;
		tmp = tmp->next;
	}
	return (index);
}

void	put_min_on_top(t_list_ps **stack_a)
{
	t_list_ps	*tmp;
	int			value_min;
	int			index;
	int			size;

	tmp = *stack_a;
	value_min = tmp->content;
	while (tmp)
	{
		if (value_min > tmp->content)
			value_min = tmp->content;
		tmp = tmp->next;
	}
	index = value_to_index(stack_a, value_min);
	size = ft_lstsize(stack_a);
	if (index)
	{
		if (index > size / 2)
			while ((size - index++ > 0))
				rra(stack_a);
		else
			while (index--)
				ra(stack_a);
	}
}
