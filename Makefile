# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/22 19:41:40 by qleon             #+#    #+#              #
#    Updated: 2019/08/22 19:41:45 by qleon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
RM = rm -f
CFLAGS= -Wall -Werror -Wextra -c
NAME= libftprintf.a
SOURCES= format_print.c printf_reg.c printf_v.c strbuilder.c
OBJECTS= $(SOURCES:.c=.o)
INCLUDES= ft_printf.h strbuilder.h

LIBFTDIR = libft
LIBFT = $(LIBFTDIR)/libft.a

all: $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFTDIR)

$(NAME): $(SOURCES) $(INCLUDES) $(LIBFT)
	@cp $(LIBFT) $(NAME)
	@$(CC) $(CFLAGS) $(SOURCES)
	@ar rcu $(NAME) $(OBJECTS)
	@ranlib $(NAME)

.PHONY: clean
clean:
	@$(RM) $(OBJECTS)
	@$(MAKE) clean -C $(LIBFTDIR)

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) fclean -C $(LIBFTDIR)

re: fclean $(NAME)
