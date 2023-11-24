# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    sources_gnl.mk                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vduchi <vduchi@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 17:59:25 by vduchi            #+#    #+#              #
#    Updated: 2023/11/14 14:59:50 by vduchi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_GNL	=	srcs/gnl/get_next_line.c

OBJS_GNL	=	$(patsubst $(SRCS_DIR_GNL)/%, $(OBJS_DIR_GNL)/%, $(SRCS_GNL:.c=.o))
DEPS_GNL	=	$(patsubst $(SRCS_DIR_GNL)/%, $(DEPS_DIR_GNL)/%, $(SRCS_GNL:.c=.d))
