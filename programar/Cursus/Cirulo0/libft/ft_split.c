/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:18:18 by abastard          #+#    #+#             */
/*   Updated: 2024/03/16 14:06:32 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	first(char const *s, char c)
{
	size_t	i;

	i = 0;
	if (s[i] == c)
		i++;
	return (i);
}

static char	**alocator(char const *s, char c)
{
	size_t	end;
	size_t	counter;
	size_t	start;
	char	**str;
	size_t	i;

	end = 0;
	start = 0;
	counter = 0;
	while (s[end] != '\0')
	{
		if ((s[end] == c || s[end + 1] == '\0') && s[end - 1] != c)
		{
			i = 0;
			str[counter] = malloc(end - start);
			if (!str[counter])
				return (NULL);
			while (i < (end - start))
			{
				str[counter][i] = s[start];
				i++;
				start++;
			}
			str[counter][i + 1] = '\0';
			counter++;
			end++;
			start = end;
		}
		else if (s[end] == c && s[end - 1] == c)
		{
			end++;
			start = end;
		}
		else
			end++;
	}
	return (str);
}
/*
char	**ft_split(char const *s, char c)
{
}
*/

static char	**alocator2(char const *s, char c)
{
	size_t	end;
	size_t	counter;
	size_t	start;
	char	**str;
	size_t	i;

	end = 0;
	start = 0;
	counter = 0;
	while (s[end] != '\0')
	{
		if (s[end] =! c && (s[end + 1] ==c || s[end +1] == '\0'))
		{
			/* code */
		}
		
	}
}


int	main(void)
{
	char *str = "aaaholoaaasia";
	char **str2 = alocator(str, 'a');
	int i = 0;
	while (i < 2)
	{
		printf("%s", str2[i]);
		i++;
	}
}