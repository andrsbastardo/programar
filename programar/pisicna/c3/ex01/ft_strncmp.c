/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:52:42 by abastard          #+#    #+#             */
/*   Updated: 2023/07/25 10:50:39 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i != n))
	{
		if (s1[i] != s2[i])
		{
			count = (s1[i] - s2[i]);
			return (count);
		}
		i++;
	}
	return (count);
}
