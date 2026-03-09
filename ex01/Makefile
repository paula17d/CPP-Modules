# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/04 15:52:08 by pauladretta       #+#    #+#              #
#    Updated: 2026/03/04 15:52:11 by pauladretta      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRC			=	./main.cpp ./Bureaucrat.cpp ./Form.cpp
				
OBJ			=	$(SRC:.cpp=.o)
			
CXX			=	c++

CXXFLAGS	=	 -std=c++17

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