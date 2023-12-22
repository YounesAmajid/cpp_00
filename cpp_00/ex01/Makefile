# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 11:31:36 by yamajid           #+#    #+#              #
#    Updated: 2023/12/20 14:11:44 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	PhoneBook
Run		=	clang++
FLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

SRCS 	=	contact.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(Run) $(FLAGS) -o $(NAME) $(OBJS)

%.o:  %.cpp contact.hpp
	$(Run) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all