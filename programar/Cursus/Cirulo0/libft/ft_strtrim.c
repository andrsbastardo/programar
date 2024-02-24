/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:29:33 by abastard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:54:22 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
=======
/*   Updated: 2024/01/24 21:48:07 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		is_in_set(char c, const char *set)
{
    /*Comprobamos si c = set, este bucle indica si *Set esta todavia lleno y 
    hay cosas sobre las que iterar sigue adelante */

>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

<<<<<<< HEAD
char	*ft_strtrim(char const *s1, char const *set)
{
	__SIZE_TYPE__	start;
	__SIZE_TYPE__	end;
	char			*rtn;

	if (!s1)
		return (0);
	else
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (is_in_set(s1[start], set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		if (!(rtn == ft_strdup("")))
=======
char *ft_strtrim(char const *s1, char const *set)
{
    
	__SIZE_TYPE__	start;
	__SIZE_TYPE__	end;
	char	*rtn;
    /*Si s1 es nulo retorna nulo*/
	if (!s1)
		return (0);
    /*Si set es nulo, retorna s1 en otra string*/
	if (!set)
		return (ft_strdup(s1));
    /*Inicializa start y end, como el final de la string s1*/
	start = 0;
	end = ft_strlen(s1);

    /*Cuando s1 es igual a set en una posición especifica, retorna 0, cuando eso sucede, 
    suma 1 a start, cuando no sal del bucle*/
	while (is_in_set(s1[start], set) == 0)
		start++;
    
    /* Si start = strlen, retorna s1 en otra string cuando */
    /*Retorna una puntero con la memoria alocada de la longitud de s1*/
	if (start == ft_strlen(s1))
	{
		if (!(rtn = ft_strdup("")))
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
			return (0);
		else
			return (rtn);
	}
<<<<<<< HEAD
	while (is_in_set(s1[end - 1], set) == 0)
		end--;
	rtn = ft_substr(s1, start, end - start);
	return (rtn);
}
=======
    /*Mismo que el anterior, pero empieza desde el final de s1*/
	while (is_in_set(s1[end - 1], set) == 0)
		end--;
    /* Aloca en rtn, la string s1 modificada usando substr, que hace lo que queremos, retorna rtn*/
	rtn = ft_substr(s1, start, end - start);
	return (rtn);
}
    
>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
