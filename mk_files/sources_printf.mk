# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    sources_printf.mk                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vduchi <vduchi@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 17:59:25 by vduchi            #+#    #+#              #
#    Updated: 2023/11/14 15:00:13 by vduchi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_PRINTF	=	srcs/printf/ft_hex.c
SRCS_PRINTF	+=	srcs/printf/ft_utils.c
SRCS_PRINTF	+=	srcs/printf/ft_printf.c
SRCS_PRINTF	+=	srcs/printf/ft_utoa.c

OBJS_PRINTF	=	$(patsubst $(SRCS_DIR_PRINTF)/%, $(OBJS_DIR_PRINTF)/%, $(SRCS_PRINTF:.c=.o))
DEPS_PRINTF	=	$(patsubst $(SRCS_DIR_PRINTF)/%, $(DEPS_DIR_PRINTF)/%, $(SRCS_PRINTF:.c=.d))
