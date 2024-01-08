/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:52:57 by abastard          #+#    #+#             */
/*   Updated: 2023/07/25 11:14:56 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*
int main()
{
	char str1[20] = "string 1";
	char str2[20] = "string 2";
	ft_strncat(str1, str2, 6);
	printf("str1: %s\n", str1);
	printf("str2, %s\n", str2);
	return 0;
}*/
