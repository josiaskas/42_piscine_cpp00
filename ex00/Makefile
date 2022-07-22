# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 18:37:04 by jkasongo          #+#    #+#              #
#    Updated: 2022/07/22 19:33:09 by jkasongo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
INCLUDES_DIR = includes/
SRCS_DIR = srcs/
OBJS_DIR = objs/


#colors
GREEN = \033[0;32m
RED = \033[0;31m
RESET_COLOR = \033[0m


SRCS = main.cpp


all:$(SRCS)
	@$(CC) $(CFLAGS) $@ -o $(NAME)

$(NAME):all

clean:
	@echo cleaning

fclean : clean
	@rm -rf $(NAME)
	@echo "$(RED)full clean$(RESET_COLOR)"

re : fclean all
	@echo "$(GREEN) rebuild $(RESET_COLOR)"

launch: all
	./$(NAME)

.PHONY	: all clean fclean re launch
