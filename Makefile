# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/22 19:41:40 by qleon             #+#    #+#              #
#    Updated: 2019/08/27 20:39:50 by qleon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
RM = rm -f
CFLAGS= -Wall -Werror -Wextra -c
NAME= libftprintf.a
SOURCES=$(wildcard src/*)
OBJECTS= $(SOURCES:src/%.c=%.o)
INCLUDES= includes/

LIBFTDIR = libft/
LIBFT = $(LIBFTDIR)/libft.a

all: $(NAME) header

$(LIBFT):
	@$(MAKE) -C $(LIBFTDIR)

$(NAME): $(SOURCES) $(INCLUDES) $(LIBFT)
	@cp $(LIBFT) $(NAME)
	@$(CC) -I $(INCLUDES) -I $(LIBFTDIR) $(CFLAGS) $(SOURCES)
	@ar rcu $(NAME) $(OBJECTS)
	@ranlib $(NAME)

header:
	@cp $(INCLUDES)/$(NAME:%.a=%.h) .

norm:
	norminette src/. includes/.

norme: norm
norminette: norm

.PHONY: clean
clean:
	@$(RM) $(OBJECTS)
	@$(MAKE) clean -C $(LIBFTDIR)

fclean: clean
	@$(RM) $(NAME) $(NAME:%.a=%.h)
	@$(MAKE) fclean -C $(LIBFTDIR)

re: fclean all
