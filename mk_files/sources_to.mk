# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    sources_to.mk                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 17:59:25 by vduchi            #+#    #+#              #
#    Updated: 2023/11/07 18:56:37 by nmota-bu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_TO		=	srcs/to/ft_atoi.c
SRCS_TO		+=	srcs/to/ft_atol.c
SRCS_TO		+=	srcs/to/ft_itoa.c
SRCS_TO		+=	srcs/to/ft_tolower.c
SRCS_TO		+=	srcs/to/ft_toupper.c

OBJS_TO		=	$(patsubst $(SRCS_DIR_TO)/%, $(OBJS_DIR_TO)/%, $(SRCS_TO:.c=.o))
DEPS_TO		=	$(patsubst $(SRCS_DIR_TO)/%, $(DEPS_DIR_TO)/%, $(SRCS_TO:.c=.d))
