/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:30:09 by abastard          #+#    #+#             */
/*   Updated: 2023/07/26 15:11:32 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
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
}

int main(void)
{
	printf("%d", ft_atoi("2147483649"));
	return (0);
}
