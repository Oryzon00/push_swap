/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:11:40 by ajung             #+#    #+#             */
/*   Updated: 2022/01/21 20:16:03 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_doublon(char **str)
{
	int	i;
	int	j;

	j = 0;
	while(str[j])
	{
		i = 0;
		while (str[i + j + 1])
		{
			if (ft_atoi(str[j]) == ft_atoi(str[i + j + 1]))
			{
				write(1, "Error\n", 5);
				exit(0);
			}
			i++;
		}
		j++;
	}
}

void	check_error(char **str)
{
	int	i;
	int j;

	i = 0;
	while(str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if ('0' <= str[i][j] && str[i][j] <= '9')
				j++;
			else
			{
				write(1, "Error\n", 6);
				exit(0);
			}
		}
		i++;
	}
	check_doublon(str);
}

void	parse_one(char *str, t_listps list)
{
	char		**ret_split;
	int			i;
	t_listps	*elem;

	ret_split = ft_split(str, ' ');
	if (ret_split[0] == NULL)
		exit (0);
	i = 0;
	while(ret_split[i])
	{ 
		elem = ft_lstnew_ps(ft_atoi(ret_split[i]), i);
		elem->index = i;
		i++;
		
	}
}

void parse_multiple(int argc, char **argv, t_listps list)
{
	
}

void	parsing(int argc, char **argv)
{
	t_listps list;
	
	if(argc < 2)
		exit(0);
	if (argc == 2)
		parse_one(argv[2], list);
	else
		parse_multiple(argc, argv, list);
}
