# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    sources_gnl.mk                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 17:59:25 by vduchi            #+#    #+#              #
#    Updated: 2023/11/07 10:56:44 by nmota-bu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_GNL	=	srcs/gnl/get_next_line.c
# SRCS_GNL	+=	srcs/gnl/get_next_line_utils.c

OBJS_GNL	=	$(patsubst $(SRCS_DIR_GNL)/%, $(OBJS_DIR_GNL)/%, $(SRCS_GNL:.c=.o))
DEPS_GNL	=	$(patsubst $(SRCS_DIR_GNL)/%, $(DEPS_DIR_GNL)/%, $(SRCS_GNL:.c=.d))
