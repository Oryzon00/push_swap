/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:11:40 by ajung             #+#    #+#             */
/*   Updated: 2022/02/01 17:24:37 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_multiple(char **argv, t_list_ps **list)
{
	int			i;
	t_list_ps	*elem;

	if (!argv[1][0])
		exit (0);
	if (check_error(&(argv[1])) == -1)
		exit(0);
	*list = ft_lstnew_ps(ft_atoi(argv[1]), 0);
	i = 2;
	while (argv[i])
	{
		elem = ft_lstnew_ps(ft_atoi(argv[i]), i);
		if (!elem)
			exit(0);
		ft_lstadd_back_ps(list, elem);
		i++;
	}
}

void	parse_arg(int argc, char **argv, t_list_ps **list)
{
	if (argc <= 1)
		exit (0);
	else
		parse_multiple(argv, list);
}
