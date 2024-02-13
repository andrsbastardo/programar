# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abastard <abastard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 13:37:29 by abastard          #+#    #+#              #
#    Updated: 2024/02/13 13:38:42 by abastard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME

NAME = libft.a

# COMPILER

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar -rc

# INCLUDE

INCLUDE = libft.h

# SOURCES

SRC = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_strlcpy.c \
		ft_memmove.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_putendl_fd.c

OBJ = $(SRC:%.c=%.o)

B_OBJ = $(BONUS:%.c=%.o)

# RM

RM = rm -rf

# RULES

.PHONY: all re clean fclean bonus

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
		$(AR) $(NAME) $(OBJ)

bonus: $(OBJ) $(B_OBJ) $(INCLUDE)
		$(AR) $(NAME) $(B_OBJ) $(OBJ)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all