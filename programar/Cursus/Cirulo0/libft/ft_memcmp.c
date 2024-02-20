/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:50:24 by abastard          #+#    #+#             */
/*   Updated: 2024/02/13 15:37:29 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void *s1, const void *s2, __SIZE_TYPE__ n)
{
	char			*str1;
	char			*str2;
	__SIZE_TYPE__	i;

	*str1 = (char *) s1;
	*str2 = (char *) s2;
	while (n != 0)
	{
		while (str1[i] != str2[i])
		{
			return (*(--str1) - *(--str2));
		}
		i++;
		n--;
	}
}
