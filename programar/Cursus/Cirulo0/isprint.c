/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuadmin <usuadmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:32:21 by usuadmin          #+#    #+#             */
/*   Updated: 2024/01/10 17:53:29 by usuadmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <ctype.h>
#include <stdio.h>
*/

int is_print( int arg )
{
    int	i;

    i = 0;
    while (arg != '\0')
    {
    if (arg >= 33 && arg <= 126)
        return (16384);
    else
        return (0);
}
}

/*
  int main()
{
    char c;
    c='0';
    printf("Result when numeric character is passed: %d", is_print(c));

    c= 1;
    printf("\nResult when non-numeric character is passed: %d", is_print(c));

    return 0;
}
*/