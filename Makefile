# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bsomers <bsomers@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/01/26 10:34:44 by bsomers       #+#    #+#                  #
#    Updated: 2022/01/26 12:22:43 by bsomers       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft

O_FILES = ft_printf.o \
			conv_u.o \
			conv_Xx.o \
			conv_p.o \
			conv_c.o \
			conv_s.o \
			conv_di.o

SRC = $(O_FILES:.o=.c)

HEADER = ft_printf.h

CFLAGS = -Wall -Wextra -Werror

OBJ = $(O_FILES)

all: $(NAME)

$(NAME): $(OBJ)
		@make -C $(LIBFT)
		@cp libft/libft.a ./$(NAME)
		ar rcs $@ $^

%.o: %.c $(HEADER)
		$(CC) -c $(CFLAGS) -o $@ $<

bonus: $(NAME)

clean:
		rm -f $(O_FILES)
		@make clean -C $(LIBFT)

fclean: clean
		rm -f $(NAME)
		@make fclean -C $(LIBFT)

re:
		$(MAKE) fclean
		$(MAKE) all

.PHONY: all clean fclean re