# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pissrith <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 21:22:41 by pissrith          #+#    #+#              #
#    Updated: 2023/09/20 00:41:42 by pissrith         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_atoi.c\
ft_isalpha.c\
ft_isdigit.c\
ft_memcpy.c\
ft_tolower.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_toupper.c\
ft_bzero.c\
ft_calloc.c\
ft_memchr.c\
ft_strchr.c\
ft_strrchr.c\
ft_memcmp.c\
ft_strncmp.c\
ft_strnstr.c\
ft_memset.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_substr.c\
ft_strdup.c\
ft_strjoin.c\
ft_itoa.c\
ft_strtrim.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_strmapi.c\
ft_striteri.c\
ft_split.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
OBJECTS = $(SOURCES:.c=.o)

BONUS			=	ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstlast.c\
					ft_lstadd_back.c

BONUS_OBJS		= $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean bonus fclean re
