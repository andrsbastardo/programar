/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:50:21 by abastard          #+#    #+#             */
/*   Updated: 2023/07/26 12:30:19 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	resto;
	unsigned int	j;

	i = 0;
	j = 0;
	resto = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	resto = size - i;
	while (j < resto || src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (i + j - 1);
}

int main(void)
{
	char alfa[20] = "Hola";
	char beta[20] = "Adios";
	//int a = ft_strlcat(alfa, beta, 0);
	int b= strlcat(alfa, beta, 0);
	//printf("%d" , a);
	printf("%d" , b);
	return (0);
}

