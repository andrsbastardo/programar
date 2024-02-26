/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:01:01 by abastard          #+#    #+#             */
/*   Updated: 2024/02/20 11:07:31 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_fd(int fd, char *buffer, char *prev_line)
{
	int		i;
	char	*line;

	i = 1;
	while (i)
	{//Gol
		i = read(fd, buffer, BUFFER_SIZE); //Read 1 character from the file, and advance a number equal to buffersize
		if (i == -1) //If not able to read, return null
			return (NULL);
		else if (i == 0) //If not readeable, stop the program.
			break ;
		buffer[i] = '\0'; //Stop reading, and put and EOF simbol
		if (!prev_line) //Copy the letter un a *
			prev_line = ft_strdup("");
		line = prev_line; //Equal line to prev_line
		prev_line = ft_strjoin(line, buffer); //Junta line y buffer en una sola string
		free(line); //Libera la memoria de line
		line = NULL; //Limpia line para el siguiente bucle
		if (!prev_line) //If prev_line = NUll, return NULL
			return (NULL);
		if (ft_strchr(buffer, '\n')) //Si encuentra el caracter de salto de linea, rompe el bucle
			break ;
	}
	return (prev_line);
}

static char	*process_liney(char *line)
{
	size_t	i;
	char	*res;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == '\0')
		return (NULL);
	res = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (!res)
	{
		free(res);
		res = NULL;
	}
	line[i + 1] = '\0';
	return (res);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buffer;
	static char	*prev_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	line = read_fd(fd, buffer, prev_line);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	prev_line = process_liney(line);
	return (line);
}