/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:22:55 by usuadmin          #+#    #+#             */
/*   Updated: 2024/02/24 14:24:47 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <ctype.h>
#include <stdio.h>
*/

#include "libft.h"

int	ft_isalnum(int argument)
{
	if ((argument >= 'a' && argument <= 'z') || (argument >= 'A'
			&& argument <= 'Z') || (argument >= '0' && argument <= '9'))
		return (argument);
	else
		return (0);
}

/*
int	main(void)
{
	char	c;
	int		result;

	c = '4';
	result = isalnum(c);
	printf("When %c is passed, return (value is %d\n", c, result));
	c = 'l';
	result = isalnum(c);
	printf("When %c is passed, return (value is %d\n", c, result));
	c = 'y';
	result = isalnum(c);
	printf("When %c is passed, return (value is %d\n", c, result));
	c = '+';
	result = isalnum(c);
	printf("When %c is passed, return (value is %d\n", c, result));
	return (0);
}
*/
