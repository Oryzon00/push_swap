/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_incassable.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:31:48 by ajung             #+#    #+#             */
/*   Updated: 2022/01/31 19:08:17 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	check_overflow(long long output, int sign)
{
	if (output * sign > 2147483647)
	{
		write(1, "Error\n", 6);
		exit (0);
	}
	else if (output * sign < -2147483648)
	{
		write(1, "Error\n", 6);
		exit (0);
	}
}

void	check_multiple_sign(char c)
{
	if ((c == '-') || (c == '+'))
	{
		write(1, "Error\n", 6);
		exit (0);
	}
}

int	ft_atoi(const char *nptr)
{
	int				i;
	long long		output;
	int				sign;
	int				j;
	int				copy;

	i = 0;
	output = 0;
	sign = 1;
	while (((9 <= nptr[i]) && (nptr[i] <= 13)) || (nptr[i] == ' '))
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	check_multiple_sign(nptr[i]);
	
	while (('0' <= nptr[i]) && (nptr[i] <= '9'))
	{
		j = 0;
		copy = output;
		while (j++ < 9)
		{
			output += copy;
			if (output - (sign < 0) < 0)
			{
				write(1, "error\n", 6);
				exit (0);
			}
		}
		output = nptr[i] - '0' + output;
		i++;
		check_overflow(output, sign);
	}
	return (output * sign);
}
