/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:11:40 by ajung             #+#    #+#             */
/*   Updated: 2022/01/24 21:08:50 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void	parse_one(char *str, t_list_ps **list)
{
	char		**ret_split;
	int			i;
	t_list_ps	*elem;

	ret_split = ft_split(str, ' ');
	if (ret_split[0] == NULL)
		exit (0);
	check_error(ret_split);
	*list = ft_lstnew_ps(ft_atoi(ret_split[0]), 0);
	i = 1;
	while(ret_split[i])
	{
		elem = ft_lstnew_ps(ft_atoi(ret_split[i]), i);
		if (!elem)
			exit (0);
		ft_lstadd_back_ps(list, elem);
		i++;
	}
}

void parse_multiple(char **argv, t_list_ps **list)
{
	int			i;
	t_list_ps	*elem;

	if (!argv[1][0])
		exit (0);
	check_error(&(argv[1]));
	*list = ft_lstnew_ps(ft_atoi(argv[0]), 0);
	i = 1;
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
	
	if(argc < 2)
		exit(0);
	if (argc == 2)
		parse_one(argv[1], list);
	else
		parse_multiple(argv, list);
}
