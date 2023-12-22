# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 11:48:18 by yamajid           #+#    #+#              #
#    Updated: 2023/12/20 11:50:43 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	megaphone
Run		=	clang++
FLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

SRCS 	=	megaphone.cpp

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(Run) $(FLAGS) -o $(NAME) $(OBJS)
	
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all