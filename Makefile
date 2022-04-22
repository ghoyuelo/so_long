# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghoyuelo <ghoyuelo@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 19:44:22 by ghoyuelo          #+#    #+#              #
#    Updated: 2022/04/01 14:25:51 by ghoyuelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

MLX = mlx/

#LIB = libft/

SRCS = so_long.c

OBJS = $(SRC:.c=.o)

CFLAGS =  -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $^ -o $@

$(NAME): $(OBJS)
	$(MAKE) -C $(LIB)
	$(MAKE) -C $(MLX)
	cp  $(LIB)libft.a .
	$(CC) $(CFLAGS)  libft.a -Imlx -Iso_long.h -Lmlx -lmlx -framework OpenGL -framework AppKit  $^ -o $@
	

#bonus: $(OBJS_BONUS)
	$(CC) $(CFLAGS)  libft.a -Imlx -Iso_long_bonus.h -Lmlx -lmlx -framework OpenGL -framework AppKit  $^ -o $(NAME)
	
clean:
	$(RM) $(OBJS) $(OBJS_BONUS) $(LIB)*.o $(MLX)*.o

fclean: clean
	$(RM) $(NAME) $(LIB)libft.a $(MLX)libmlx.a libft.a libmlx.a

re: fclean all

.PHONY: all bonus clean fclean
