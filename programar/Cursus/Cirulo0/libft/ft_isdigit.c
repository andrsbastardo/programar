/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:22:55 by usuadmin          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:52:08 by abastard         ###   ########.fr       */
=======
/*   Updated: 2024/02/13 13:58:13 by abastard         ###   ########.fr       */
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
int	ft_isdigit(int argument)
{
	while (argument != '\0')
	{
		if ((argument >= '0' && argument <= '9'))
			return (argument);
		else
			return (0);
	}
}
/*
  int main()
{
    char c;
    c='0';
    printf("Result when numeric character is passed: %d", is_digit(c));

    c='+';
    printf("\nResult when non-numeric character is passed: %d", is_digit(c));

    return 0;
}
*/
