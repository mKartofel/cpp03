# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 19:04:36 by vfiszbin          #+#    #+#              #
#    Updated: 2022/07/29 10:38:52 by vfiszbin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRCS =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\

OBJS = ${SRCS:.cpp=.o}

INCLUDES =	ClapTrap.hpp\
			ScavTrap.hpp\

CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

.cpp.o:
	${CC} ${FLAGS} -c $ $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME} : ${INCLUDES} ${OBJS}
	
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re