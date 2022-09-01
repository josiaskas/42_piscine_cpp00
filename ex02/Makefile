# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 18:37:04 by jkasongo          #+#    #+#              #
#    Updated: 2022/08/07 19:58:42 by jkasongo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=account
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES_DIR = includes/
SRCS_DIR = srcs/
OBJS_DIR = objs/


#colors
GREEN = \033[0;32m
RED = \033[0;31m
RESET_COLOR = \033[0m


SRCS = tests.cpp Account.cpp
OBJFILES = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJFILES))

all: $(OBJS_DIR) builds

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

builds: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o:%.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):all

clean:
	@rm -rf $(OBJS_DIR)
	@echo cleaning

fclean : clean
	@rm -rf $(NAME)
	@echo "$(RED)Full clean $(RESET_COLOR)"

re : fclean all
	@echo "$(GREEN)Rebuild $(RESET_COLOR)"

launch: all
	./$(NAME)

.PHONY	: all clean fclean re launch
