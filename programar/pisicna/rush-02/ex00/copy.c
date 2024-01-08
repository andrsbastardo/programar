/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:57:05 by abastard          #+#    #+#             */
/*   Updated: 2023/07/23 16:37:08 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Tengo string
//Quiero copiar lo que este detras de : en columna 0
//Quiero copiar lo que este delante de : en columna 1

int	main(void)
{
	char	content[50];
	char	inter[50];
	int		i;
	int		column;
	int		row;
	int		copy;
	char	*array[50000000];

	i = 0;
	column = 0;
	row = 0;
	copy = 0;
	while(content[i] !='\0')
	{
		if (content[i] != ' ' || content[i] != '\n')
		{
			inter[i] = content[i];
		}
		if ((content[i] == ' ' || content [i] == '\n') && copy < 1 )
		{
			array[row][column] = inter[i];
			copy++;
		}
		if (content[i] == ':')
		{
			column++;
			copy = 0;
		}
		if (content[i] == '\n')
		{
			row++;
			column = 0;
			copy = 0;
		}
	}
}
