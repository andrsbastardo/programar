/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:22:55 by usuadmin          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:52:04 by abastard         ###   ########.fr       */
=======
/*   Updated: 2024/02/13 12:51:50 by abastard         ###   ########.fr       */
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
int	ft_isascii(int argument)
{
	int	i;

	i = 0;
	while (argument != '\0')
	{
		if ((argument >= 0 && argument <= 128))
			return (1);
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
    result = is_ascii(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = is_ascii(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'y';
    result = is_ascii(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '€';
    result = is_ascii(c);
    printf("When %c is passed, return value is %d\n", c, result);

    return 0;
}
*/
