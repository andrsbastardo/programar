/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:22:55 by usuadmin          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:51:58 by abastard         ###   ########.fr       */
=======
/*   Updated: 2024/02/13 13:34:55 by abastard         ###   ########.fr       */
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/
<<<<<<< HEAD
#include "libft.h"
=======
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242

int	ft_isalpha(int argument)
{
	int	i;

	i = 0;
	while (argument != '\0')
	{
		if ((argument >= 'a' && argument <= 'z')
			|| (argument >= 'A' && argument <= 'Z'))
			return (argument);
		else
			return (0);
	}
}
/*
    int main()
{
    char c;
    c = '-';
    printf("\nResult when uppercase alphabet is passed: %d", is_alpha(c));

    c = 'a';
    printf("\nResult when lowercase alphabet is passed: %d", is_alpha(c));

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d", is_alpha(c));

    return 0;
}
*/