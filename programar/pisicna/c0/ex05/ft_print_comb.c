/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:19:45 by abastard          #+#    #+#             */
/*   Updated: 2023/07/27 08:47:13 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	principal(int c, int d, int u)
{
	while (c <= '7' )
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(u);
				if (c != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				u++;
			}
		d++;
		}
	c++;
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = '0';
	d = '1';
	u = '2';
	principal(c, d, u);
}

int	main(void)
{
	ft_print_comb;
	return(1);
}
