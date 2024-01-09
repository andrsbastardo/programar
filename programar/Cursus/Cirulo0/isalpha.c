/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuadmin <usuadmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:22:55 by usuadmin          #+#    #+#             */
/*   Updated: 2024/01/09 10:53:22 by usuadmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stdio.h>
#include <ctype.h>
*/

int isalpha(int argument)
    {
        int	i;

	i = 0;
	while (argument != '\0')
	{
		if ((argument >= 'a' && argument <= 'z')
			|| (argument >= 'A' && argument <= 'Z'))
			
            return (1024);
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