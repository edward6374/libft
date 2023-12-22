# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    sources_dptr.mk                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 17:59:25 by vduchi            #+#    #+#              #
#    Updated: 2023/12/22 11:45:57 by vduchi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DPTR	=	srcs/dptr/ft_len_dptr.c
SRCS_DPTR	+=	srcs/dptr/ft_free_dptr.c
SRCS_DPTR	+=	srcs/dptr/ft_print_dptr.c
SRCS_DPTR	+=	srcs/dptr/ft_file_to_dptr_m.c

OBJS_DPTR	=	$(patsubst $(SRCS_DIR_DPTR)/%, $(OBJS_DIR_DPTR)/%, $(SRCS_DPTR:.c=.o))
DEPS_DPTR	=	$(patsubst $(SRCS_DIR_DPTR)/%, $(DEPS_DIR_DPTR)/%, $(SRCS_DPTR:.c=.d))
