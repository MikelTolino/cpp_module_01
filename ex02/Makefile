# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 11:26:13 by mmateo-t          #+#    #+#              #
#    Updated: 2022/05/09 17:07:56 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= clang++
SRCS:= $(wildcard *.cpp)
OBJS := $(SRCS:%.cpp=%.o)
CPPFLAGS:= -Wall -Werror -Wextra
CPPSTD:= -std=c++98
NAME:= HiThisIsBrain
RM:= rm -f
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(CPPSTD) $(OBJS) -o $(NAME)

$(%.o): $(%.c)
	@echo "Creating objects"
	$(CC) -c $^ -o $@

clean:
		@echo "Cleaning objects"
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all $(NAME) clean fclean re
