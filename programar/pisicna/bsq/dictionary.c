/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:57:05 by abastard          #+#    #+#             */
/*   Updated: 2023/07/26 08:37:20 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> //Obligatoria
#include <fcntl.h> //Obligatoria
#include <unistd.h> //Obligatoria

char	dictionary(void)
{	
	char	archive;
	char	*content;

	archive = open("dictionaty.c", O_RDONLY);
	if (archive == -1)
	{
		write(1, "Map Error\n", 11);
		return (1);
	}
	content = (char*)malloc (5000);
	if (content == ((void*) 0))
	{
		write(1, "Map Error\n", 11);
		close(archive);
		return (1);
	}
	read(archive, content, 5000);
	content[50000000] = '\0';
	close(archive);
	printf(%s\n ,&content);
	free(content);
	return (0);
}

int	main(void)
{
	dictionary();
	return (0);
}
