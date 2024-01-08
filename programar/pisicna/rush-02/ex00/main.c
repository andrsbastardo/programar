/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:30:57 by abastard          #+#    #+#             */
/*   Updated: 2023/07/23 17:02:31 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		write(1, "Por favor enseñame\n" ,20);
	
	}
	if (argc == 2)
	{
		write(1, "Por favor enseñame\n ,20)	
	}
	else
	{
		write(1, "Error", 6);
	}
}
