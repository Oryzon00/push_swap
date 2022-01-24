/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:31:48 by ajung             #+#    #+#             */
/*   Updated: 2022/01/24 18:30:10 by ajung            ###   ########.fr       */
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

int	ft_atoi(const char *nptr)
{
	int				i;
	long long		output;
	int				sign;

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
	while (('0' <= nptr[i]) && (nptr[i] <= '9'))
	{
		output = nptr[i] - '0' + (output * 10);
		i++;
		check_overflow(output, sign);
	}
	return (output * sign);
}
