/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:50:23 by abastard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/24 12:52:18 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

=======
/*   Updated: 2024/02/13 14:37:41 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> 85374f7029757a82142e57fdbaea6db38e307242
static int	ft_len(int n)
{
	__SIZE_TYPE__	len;
	int				isneg;

	len = 0;
	isneg = 0;
	if (n < 0)
	{
		len++;
		isneg++;
		n = -n;
	}
	while (n >= 1)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*rtn(char *rtn, int n, int len)
{
	if (n != 0)
		rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn = ft_strdup("0"));
	if (!rtn)
		return (0);
}

static char	*ft_itoa(int n)
{
	char	*rtn;
	int		len;
	int		isneg;

	isneg = 0;
	len = ft_len(n);
	rtn = rtn(rtn, n, len);
	if (n < 0)
	{
		isneg++;
		n = -n;
	}
	rtn[len] = '\0';
	while (--len)
	{
		rtn[len] = (n % 10) + '0';
		n /= 10;
	}
	if (isneg == 1)
		rtn[0] = '-';
	else
		rtn[0] = (n % 10) + '0';
	return (rtn);
}
