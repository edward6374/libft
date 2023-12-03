/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:45:47 by nmota-bu          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/30 20:42:07 by nmota-bu         ###   ########.fr       */
=======
/*   Updated: 2023/11/28 14:48:35 by nmota-bu         ###   ########.fr       */
>>>>>>> nacho
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_print_dptr(char **arr, int line)
{
	int	i;

	i = 0;
	if (arr == NULL)
		return ;
	while (arr[i] != NULL)
	{
		printf("%s", arr[i]);
		if (line)
			printf("\n");
<<<<<<< HEAD

=======
>>>>>>> nacho
		i++;
	}
}
