/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:29:33 by abastard          #+#    #+#             */
/*   Updated: 2024/03/16 11:17:39 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	is_in_set(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while ((set[j] != s1[i] && set[j] != '\0'))
		{
			j++;
		}
		if (set[j] == s1[i])
		{
			i++;
			j = 0;
		}
		if (set[j] != s1[i] && set[j] == '\0')
			return (i);
	}
	return (0);
}

static char	is_in_reverse(const char *s1, const char *set)
{
	size_t	i2;
	size_t	j;

	i2 = ft_strlen(s1);
	j = 0;
	while (i2 > 0)
	{
		while ((set[j] != s1[i2] && set[j] != '\0'))
		{
			j++;
		}
		if (set[j] == s1[i2])
		{
			i2--;
			j = 0;
		}
		if (set[j] != s1[i2] && set[j] == '\0')
			return (i2 + 1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	is_in_s;
	size_t	is_in_r;
	char	*str;

	i = 0;
	if (!set)
		ft_strdup(s1);
	is_in_s = is_in_set(s1, set);
	is_in_r = is_in_reverse(s1, set);
	str = malloc(is_in_r - is_in_s + 1);
	if (!str)
		return (NULL);
	while (s1[is_in_s] != '\0' && (is_in_s + i) < is_in_r)
	{
		str[i] = s1[is_in_s + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
	printf("%s",ft_strtrim("jajaholoja\nja\njja","ja"));
	return (0);
} */
