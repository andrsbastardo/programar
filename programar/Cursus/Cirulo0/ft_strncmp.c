/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:28:50 by abastard          #+#    #+#             */
/*   Updated: 2024/01/16 18:30:25 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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