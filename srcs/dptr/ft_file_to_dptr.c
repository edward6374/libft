/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_to_dptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:29:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/03 20:19:31 by vduchi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Retorna el contenido de un fichero a un char doble puntero
// Cada linea en una dirección diferente del array.
// Primera linea arr[0], arr[1]...
// #1. El path incluido el nombre del fichero a procesar.
// #2. Opción 1 se incluira el salto de linea \n, 0 se quitara el salto.

#include <fcntl.h>
#include "../../incs/libft.h"
#include "../../incs/error.h"
#include "../../incs/colorsft.h"
#include "../../incs/get_next_line.h"

#define MSG_DAN_0 "File not found"
#define MSG_DAN_1 "File is empty"

int static g_rows;
int g_line;

void static is_line(char *line, char **res, int control, int *write)
{
	int static i = 0;
	int len;

	if (control == FALSE)
		g_rows += 1;
	else
	{
		len = ft_strlen(line);
		if (line[len - 1] == '\n' && g_line == 0)
			res[i] = ft_substr(line, 0, ft_strlen(line) - 1);
		else
			res[i] = ft_substr(line, 0, len);
		i += 1;
		if (g_rows == i)
			*write = TRUE;
	}
}

void static error_file(int fd)
{
	if (fd < 0)
	{
		ft_message(DANGER, MSG_DAN_0);
		exit(EXIT_FAILURE);
	}
}

void static error_empty(void)
{
	ft_message(DANGER, MSG_DAN_1);
	exit(EXIT_FAILURE);
}

char **open_file(char *file, char **res, int control, int *write)
{
	int fd;
	char *line;

	fd = open(file, O_RDONLY);
	error_file(fd);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
		{
			if (!g_rows)
				error_empty();
			if (!res)
				// res = (char **)ft_calloc(g_rows + 1, sizeof(char *));
				res = (char **)malloc(g_rows + 1 * sizeof(char *));
			control = TRUE;
			close(fd);
			if (*write)
				return (res);
			open_file(file, res, control, write);
		}
		else if (line)
			is_line(line, res, control, write);
		free(line);
	}
}

char **ft_file_to_dptr(char *file, int line)
{
	char **res;
	int control;
	int write;

	g_line = line;
	g_rows = 0;
	res = NULL;
	control = FALSE;
	write = FALSE;
	return (open_file(file, res, control, &write));
}

// ============================================================================
/*
#include <stdio.h>

void free_cur(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int main(int n, char **file)
{
	char **cur;
	int i;

	// para incluir salto de line \n 1, para no 0
	cur = ft_file_to_dptr(file[1], 1);
	i = 0;
	if (cur)
	{
		while (cur[i])
		{
			printf("%s", cur[i]);
			i++;
		}
	}
	free_cur(cur);

	// char **tmp = ft_file_to_dptr(file[1], 0);
}
*/
// gcc ft_file_to_dptr.c -g3 ../../sources/libft/libft.a
