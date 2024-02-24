/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:22:55 by usuadmin          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:51:52 by abastard         ###   ########.fr       */
=======
/*   Updated: 2024/02/13 12:38:54 by abastard         ###   ########.fr       */
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
int	ft_isalnum(int argument)
{
	int	i;

	i = 0;
	while (argument != '\0')
	{
		if ((argument >= 'a' && argument <= 'z')
			|| (argument >= 'A' && argument <= 'Z')
			|| (argument >= '0' && argument <= '9'))
			return (argument);
		else
			return (0);
	}
}

/*
int main(void)
{
    char c;
    int result;

    c = '4';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'y';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '+';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    return 0;
}
*/
