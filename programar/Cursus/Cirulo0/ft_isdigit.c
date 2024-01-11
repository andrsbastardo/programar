/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:22:55 by usuadmin          #+#    #+#             */
/*   Updated: 2024/01/11 16:53:30 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stdio.h>
#include <ctype.h>
*/

int ft_isdigit(int argument)
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