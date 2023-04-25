# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltuffery <ltuffery@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 19:13:27 by ltuffery          #+#    #+#              #
#    Updated: 2023/04/25 20:03:49 by ltuffery         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phone_book

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp \
		  PhoneBook.cpp \
		  Contact.cpp

OBJS	= $(SRCS:%.cpp=%.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Finish"

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
