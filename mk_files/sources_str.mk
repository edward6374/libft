# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    sources_str.mk                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 17:59:25 by vduchi            #+#    #+#              #
#    Updated: 2023/11/24 13:50:44 by vduchi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_STR	=	srcs/str/ft_split.c
SRCS_STR	+=	srcs/str/ft_substr.c
SRCS_STR	+=	srcs/str/ft_strdup.c
SRCS_STR	+=	srcs/str/ft_strlen.c
SRCS_STR	+=	srcs/str/ft_strchr.c
SRCS_STR	+=	srcs/str/ft_strtok.c
SRCS_STR	+=	srcs/str/ft_strcmp.c
SRCS_STR	+=	srcs/str/ft_strrchr.c
SRCS_STR	+=	srcs/str/ft_strlcpy.c
SRCS_STR	+=	srcs/str/ft_strlcat.c
SRCS_STR	+=	srcs/str/ft_strjoin.c
SRCS_STR	+=	srcs/str/ft_strmapi.c
SRCS_STR	+=	srcs/str/ft_strncmp.c
SRCS_STR	+=	srcs/str/ft_strnstr.c
SRCS_STR	+=	srcs/str/ft_strcspn.c
SRCS_STR	+=	srcs/str/ft_strpbrk.c
SRCS_STR	+=	srcs/str/ft_strtrim.c
SRCS_STR	+=	srcs/str/ft_striteri.c
SRCS_STR	+=	srcs/str/ft_split_join.c

OBJS_STR	=	$(patsubst $(SRCS_DIR_STR)/%, $(OBJS_DIR_STR)/%, $(SRCS_STR:.c=.o))
DEPS_STR	=	$(patsubst $(SRCS_DIR_STR)/%, $(DEPS_DIR_STR)/%, $(SRCS_STR:.c=.d))
