/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:50:23 by abastard          #+#    #+#             */
/*   Updated: 2024/02/13 11:41:26 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_len(int n)
{
	__SIZE_TYPE__	len;
	int				isneg;

	len = 0;
	isneg = 0;
	if (n < 0) // Cambia un numero negativo a positivo
	{
		len++;
		isneg++; //Denota que el numero es negativo para la siguiente funcion
		n = -n;
	}

	while (n >= 1) // Siempre que n es mayor que uno, ca contando 
	//la longitud del numero
	{
		len++;
		n /= 10;
	}
	return (len); //retorna ambos valores
}

static char		*ft_itoa(int n)
{
	char	*rtn;
	int		len;
	int		isneg;

	rtn = 0;
	isneg = 0;
	len = ft_len(n);

	if (n != 0)
		rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn = ft_strdup("0"));
	if (!rtn)
		return (0);
	if (n < 0) // Cambia un numero negativo a positivo
	{
		isneg++; //Denota que el numero es negativo para la siguiente funcion
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