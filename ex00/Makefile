# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/14 14:40:53 by pauladretta       #+#    #+#              #
#    Updated: 2025/12/14 15:55:43 by pauladretta      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRC			=	./main.cpp ./ClapTrap.cpp
				
OBJ			=	$(SRC:.cpp=.o)
			
CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++17

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:	
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:		fclean all

leaks: re
	valgrind --leak-check=full ./$(NAME)
	$(MAKE) fclean

.PHONY: all clean fclean re leaks