/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:44:00 by abastard          #+#    #+#             */
/*   Updated: 2024/01/15 17:45:34 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int tolower(int c)
{
    
    if (c >= 65 && c <= 90)
    {
        return(c+32);
    }
    else
        return(c);
    
}