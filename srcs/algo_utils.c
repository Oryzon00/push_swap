/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:13:17 by ajung             #+#    #+#             */
/*   Updated: 2022/01/27 18:13:35 by ajung            ###   ########.fr       */
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
