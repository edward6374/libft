/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduchi <vduchi@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:32:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/11/14 14:58:45 by vduchi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_get
{
	char	content[BUFFER_SIZE];
	ssize_t	size_buf;
}	t_get;

void	ft_cut_tp(t_get *tp, int len_trim);
void	ft_tp_line_ex(t_get *tp, char **line, int len_tp, char *str);
int		ft_tp_line(t_get *tp, char **line);
int		ft_buffer(int fd, t_get *tp, char **line);

#endif
