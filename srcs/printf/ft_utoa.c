/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduchi <vduchi@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:05:08 by vduchi            #+#    #+#             */
/*   Updated: 2023/08/30 14:13:34 by vduchi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_uns_to_str(char *str, unsigned int n, int len)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		str[len - i - 1] = ((n % 10) + '0');
		n /= 10;
		i++;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_utoa(unsigned int n)
{
	int				len;
	char			*str;
	unsigned int	cpy;

	len = 0;
	cpy = n;
	while (cpy > 0)
	{
		len++;
		cpy /= 10;
	}
	if (len == 0)
		str = ft_strdup("0");
	else
	{
		str = ft_calloc(sizeof(char), len + 1);
		if (!str)
			return (NULL);
		str = ft_uns_to_str(str, (unsigned long int)n, len);
	}
	return (str);
}
