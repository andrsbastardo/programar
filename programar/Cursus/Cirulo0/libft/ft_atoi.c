/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:30:20 by abastard          #+#    #+#             */
/*   Updated: 2024/03/16 13:33:14 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				a;
	int				sign;
	unsigned int	aux;

	a = 0;
	sign = 1;
	aux = 0;
	while (str[a] == ' ' || (str[a] >= 9 && str[a] <= 13))
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sign *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		aux = (aux * 10) + (str[a] - '0');
		a++;
	}
	return (aux * sign);
}

// int main ()
// {
//     printf("%i", atoi("2147483649"));
// }
/*int	ft_atoi(char *str)
{
	int	a;
	int	sign;
	int	aux;

	a = 0;
	sign = 1;
	aux = 0;
	while (str[a] == ' ' || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sign *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		aux = (aux * 10) + (str[a] - '0');
		a++;
	}
	return (aux * sign);
}*/
