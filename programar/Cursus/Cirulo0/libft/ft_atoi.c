/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:30:20 by abastard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 11:37:55 by abastard         ###   ########.fr       */
=======
/*   Updated: 2024/02/13 13:34:48 by abastard         ###   ########.fr       */
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
<<<<<<< HEAD
}
=======
}
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
