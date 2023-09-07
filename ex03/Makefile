# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 18:43:48 by rrhnizar          #+#    #+#              #
#    Updated: 2023/09/07 01:02:24 by rrhnizar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = exec

SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp


OBJ = $(SRC:.cpp=.o)

CXX = c++

RFLAG = ${CXX} -Wall -Werror -Wextra -std=c++98 #-fsanitize=address

%.o : %.cpp
	${RFLAG} -c $< -o $@

all : ${Name}

${Name} : ${OBJ}
	${RFLAG} ${OBJ} -o ${Name}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${Name}

re : fclean all