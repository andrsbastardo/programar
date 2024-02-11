/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:50:23 by abastard          #+#    #+#             */
/*   Updated: 2024/02/11 14:31:13 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_estim(int n)
{
	__SIZE_TYPE__	estim;
	int		isneg;

	estim = 0;
	isneg = 0;
	if (n < 0) // Cambia un numero negativo a positivo
	{
		estim++;
		isneg++; //Denota que el numero es negativo para la siguiente funcion
		n = -n;
	}

	while (n >= 1) // Siempre que n es mayor que uno, ca contando 
	//la longitud del numero
	{
		estim++;
		n /= 10;
	}
	return (estim); //retorna ambos valores
}

static char		*ft_itoa(int n)
{
	char	*rtn;
	int		estim;
	int		isneg;

	rtn = 0;
	estim = ft_estim(n);
	isneg = ft_estim(n);

	if (n != 0)
		rtn = malloc(sizeof(char) * (estim + 1));
	else
		return (rtn = ft_strdup("0"));
	if (!rtn)
		return (0);
	if (n < 0) // Cambia un numero negativo a positivo
	{
		isneg++; //Denota que el numero es negativo para la siguiente funcion
		n = -n;
	}
	rtn[estim] = '\0';
	while (--estim)
	{
		rtn[estim] = (n % 10) + '0';
		n /= 10;
	}
	if (isneg == 1)
		rtn[0] = '-';
	else
		rtn[0] = (n % 10) + '0';
	return (rtn);
}