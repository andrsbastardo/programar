/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuadmin <usuadmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:22:55 by usuadmin          #+#    #+#             */
/*   Updated: 2024/01/09 12:00:24 by usuadmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stdio.h>
#include <ctype.h>
*/

int is_alnum(int argument)
    {
        int	i;

	i = 0;
	while (argument != '\0')
	{
		if ((argument >= 'a' && argument <= 'z')
			|| (argument >= 'A' && argument <= 'Z')
            || (argument >= '0' && argument <= '9'))
			
            return (8);
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