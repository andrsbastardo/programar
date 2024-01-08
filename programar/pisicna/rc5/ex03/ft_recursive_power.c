/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:21:40 by abastard          #+#    #+#             */
/*   Updated: 2023/07/27 10:25:13 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = 1;
	if (power > 0)
		i *= nb * ft_recursive_power(nb, power -1);
	return (i);
}
