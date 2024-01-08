/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:12:56 by abastard          #+#    #+#             */
/*   Updated: 2023/07/27 10:16:38 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		i *= nb * ft_recursive_factorial(nb -1);
	return (i);
}
