/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:50:23 by abastard          #+#    #+#             */
/*   Updated: 2024/02/24 17:23:22 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // For strtol
*/

static char	*excepts(int n)
{
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == INT_MAX)
		return (ft_strdup("2147483647"));
	if (n == 0)
		return (ft_strdup("0"));
	return (NULL);
}

static size_t	n_digits(int n)
{
	size_t	len;
	int		cpy;

	len = 0;
	cpy = n;
	if (n == 0)
		return (1);
	if (n == INT_MIN || n == INT_MAX)
		return (11);
	if (n < 0)
	{
		len++;
		cpy = -n;
	}
	while (cpy > 0)
	{
		cpy /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	size_t	cpy;

	if (n == 0 || n == INT_MIN || n == INT_MAX)
		return (excepts(n));
	cpy = n;
	len = n_digits(n);
	res = ft_calloc(sizeof(char), len + 1);
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		cpy = -n;
	}
	len--;
	while (cpy > 0)
	{
		res[len--] = (cpy % 10) + '0';
		cpy /= 10;
	}
	return (res);
}
