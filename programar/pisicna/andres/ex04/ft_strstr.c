/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:55:03 by abastard          #+#    #+#             */
/*   Updated: 2023/07/21 12:48:41 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (*to_find == '\0')
			return (str);
		while (str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		j = 0;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[];
	char	s2[];

	s1[] = "Hola juanito";
	s2[] = "juan";
	printf("my code: %s\nOriginal code: %s\n", ft_strstr(s1, s2), strstr(s1, s2));
}*/
