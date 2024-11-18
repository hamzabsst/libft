# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/01 09:38:43 by hbousset          #+#    #+#              #
#    Updated: 2024/11/17 14:18:04 by hbousset         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Source files for the manatadory part
SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_calloc.c ft_strdup.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		ft_strnstr.c ft_atoi.c ft_strrchr.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

# Source files for the bonus part
SRCSB =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \

# Object files for the main library (converted from the SRCS list)
OBJS = ${SRCS:.c=.o}

# Object files for the bonus part of the library (converted from the SRCSB list)
OBJB = ${SRCSB:.c=.o}

# The name of the final static library
NAME = libft.a

# Command to create or update the library (ar stands for archive)
LIBC = ar rcs
# This will replace existing files, create the archive if missing, and index it

# Compiler and compiler flags
CC = cc

CFLAGS = -Wall -Wextra -Werror
# Enable all warnings and treat them as errors

# Command to remove files
RM = rm -f

# Default target make will build this target if no other target is specified
all: ${NAME}

# Rule to create the static library (libft.a) from object files
${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

# Rule to include bonus object files in the library
bonus: ${OBJS} ${OBJB}
	${LIBC} ${NAME} ${OBJS} ${OBJB}

# Rule to compile each .c file into a .o file
# $< refers to the first prerequisite (the .c file), and $@ is the target (.o file)
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

# Rule to remove object files (both regular and bonus) - cleans up build artifacts
clean:
	${RM} ${OBJS} ${OBJB}

# Rule to remove object files and the final static library (libft.a)
fclean: clean
	${RM} ${NAME}

# Rule to recompile everything by calling 'fclean' first and then 'all'
re: fclean all

# Declare the following targets as 'phony', meaning they aren't actual files,
# so make will always run them even if files named 'all', 'bonus', etc., exist
.PHONY: all bonus clean fclean re
