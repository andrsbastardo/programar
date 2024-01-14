/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:02:09 by abastard          #+#    #+#             */
/*   Updated: 2024/01/14 10:17:07 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dst, const void *src, __SIZE_TYPE__ n)
{
    char		*dstc;
	const char	*srccc;
	dstc = (char *)dst;
	srccc = (const char *)src;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	
	while (n != 0)
		dstc[n] = srccc[n];
		n--;
	return (dst);
}