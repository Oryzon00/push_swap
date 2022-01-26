/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:31:58 by ajung             #+#    #+#             */
/*   Updated: 2022/01/26 16:55:22 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_list_ps **list)
{
	t_list_ps	*next_elem;

	while ((*list)->next)
	{
		next_elem = (*list)->next;
		free(*list);
		*list = next_elem;
	}
	free(*list);
	list = NULL;
	exit (0);
}
