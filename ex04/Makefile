# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 19:29:35 by mmateo-t          #+#    #+#              #
#    Updated: 2022/05/09 23:23:08 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= clang++
SRCS:= $(wildcard *.cpp)
OBJS := $(SRCS:%.cpp=%.o)
CPPFLAGS:= -Wall -Werror -Wextra
CPPSTD:= -std=c++98
DEBUG:= -g
NAME:= replace
RM:= rm -rf
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(CPPSTD) $(OBJS) -o $(NAME) $(DEBUG)

$(%.o): $(%.c)
	@echo "Creating objects"
	$(CC) $(DEBUG) $(CPPFLAGS) $(CPPSTD) -c $^ -o $@

clean:
	@echo "Cleaning objects"
	$(RM) $(OBJS)

fclean: clean
	@echo "Cleaning $(NAME) and .replace"
	$(RM) $(NAME) *.replace

re:	fclean all

.PHONY: all $(NAME) clean fclean re
