/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:57:52 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/11/28 14:32:43 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

int ft_strlen_p(char *str)
{
	int i = 0;
	while (str && str[i])
		i++;
	return i;
}

char *ft_strjoin_p(char *s1, char *s2)
{

	int i = 0, j = 0;
	char *res;

	if (!(res = malloc(ft_strlen_p(s1) + ft_strlen_p(s2) + 1)))
		return (NULL);
	if (s1)
	{
		while (s1[i])
			res[j++] = s1[i++];
		free(s1);
	}
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}

char *push_line(char *resto)
{
	int i;
	char *result;

	i = 0;
	while (resto[i] && resto[i] != '\n')
		i++;
	if (resto[i] == '\n')
		i++;
	if (!(result = malloc((i + 1))))
		return (NULL);
	i = 0;
	while (resto[i] && resto[i] != '\n')
	{
		result[i] = resto[i];
		i++;
	}
	if (resto[i] == '\n')
	{
		result[i] = '\n';
		result[i + 1] = '\0';
		return (result);
	}
	else
		result[i] = '\0';
	return (result);
}

char *cut_line(char *resto)
{
	int i = 0, j = 0;
	char *res;

	while (resto[i] && resto[i] != '\n')
		i++;
	if (!resto[i])
	{
		free(resto);
		return (NULL);
	}
	if (!(res = malloc((ft_strlen_p(resto) - i + 1))))
		return (NULL);
	i++;
	while (resto[i])
		res[j++] = resto[i++];
	res[j] = '\0';
	free(resto);
	return (res);
}

int is_line(char *buffer)
{
	int i = 0;

	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char *get_next_line(int fd)
{
	char buffer[BUFFER_SIZE + 1] = {0};
	static char *resto = NULL;
	char *line = NULL;
	int rd = 1;

	while (!is_line(buffer) && rd != 0)
	{
		if ((rd = read(fd, buffer, BUFFER_SIZE)) < 0)
		{
			if (resto)
			{
				free(resto);
				resto = NULL;
			}
			return NULL;
		}
		buffer[rd] = '\0';
		resto = ft_strjoin_p(resto, buffer);
	}

	line = push_line(resto);
	resto = cut_line(resto);

	if (!line || line[0] == '\0')
	{
		free(line);
		return NULL;
	}

	return line;
}

// #include <fcntl.h>
// #include <stdio.h>

// int main(int n, char **file)
// {
// 	int fd = open(file[1], O_RDONLY);
// 	char *line = get_next_line(fd);
// 	while (line)
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// }
