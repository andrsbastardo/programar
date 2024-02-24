/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:04:32 by abastard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:53:18 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
=======
/*   Updated: 2024/02/13 10:14:43 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;
    if (!s)
        return ;
    
    i= 0;
    while (s[i])
    {
        f(i, s+i);
        i++;
    }
    
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
}
