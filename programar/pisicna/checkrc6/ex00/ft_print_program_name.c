/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:21:57 by abastard          #+#    #+#             */
/*   Updated: 2023/07/27 08:18:29 by abastard         ###   ########.fr       */
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
	int	b;

	a = argc;
	b = 0;
	while (b < 1)
	{
		print(argv[0]);
		b++;
	}
	return (0);
}
