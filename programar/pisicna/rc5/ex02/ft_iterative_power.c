/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:17:17 by abastard          #+#    #+#             */
/*   Updated: 2023/07/27 10:21:09 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = 1;
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
