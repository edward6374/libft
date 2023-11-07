# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    sources_fd.mk                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 17:59:25 by vduchi            #+#    #+#              #
#    Updated: 2023/11/06 22:02:27 by nmota-bu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_FD		=	srcs/fd/ft_putnbr_fd.c
SRCS_FD		+=	srcs/fd/ft_putstr_fd.c
SRCS_FD		+=	srcs/fd/ft_putchar_fd.c
SRCS_FD		+=	srcs/fd/ft_putendl_fd.c
SRCS_FD		+=	srcs/fd/ft_putstr_error.c
SRCS_FD		+=	srcs/fd/ft_message.c

OBJS_FD		=	$(patsubst $(SRCS_DIR_FD)/%, $(OBJS_DIR_FD)/%, $(SRCS_FD:.c=.o))
DEPS_FD		=	$(patsubst $(SRCS_DIR_FD)/%, $(DEPS_DIR_FD)/%, $(SRCS_FD:.c=.d))
