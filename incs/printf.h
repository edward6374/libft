/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduchi <vduchi@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:28:03 by vduchi            #+#    #+#             */
/*   Updated: 2023/11/14 14:59:19 by vduchi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_utoa(unsigned int n);
int		ft_print_char(char c, int *count);
int		ft_print_ptr(va_list args, int *count);
int		ft_print_str(char *str, int mode, int *count);
int		ft_print_num(unsigned int u, int i, int *count);
int		ft_print_hex(unsigned int x, unsigned long long p, \
		int mode, int *count);

#endif
