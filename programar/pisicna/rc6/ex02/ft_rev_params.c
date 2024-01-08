/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:37:19 by abastard          #+#    #+#             */
/*   Updated: 2023/07/26 15:59:02 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	a;

	a = argc - 1;
	while (a >= 1)
	{
		print(argv[a]);
		a--;
	}
	return (0);
}
