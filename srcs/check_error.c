/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:23:39 by ajung             #+#    #+#             */
/*   Updated: 2022/01/24 21:08:29 by ajung            ###   ########.fr       */
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
				write(1, "Error\n", 6);
				exit (0);
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
				exit (0);			
			}
		}
		i++;
	}
	check_doublon(str);
}
