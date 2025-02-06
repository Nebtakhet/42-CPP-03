# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 13:13:00 by cesasanc          #+#    #+#              #
#    Updated: 2025/02/06 11:48:31 by cesasanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapScavFrag

SRCS =	main.cpp \
		ClapTrap.cpp \
		FragTrap.cpp \

OBJS = $(SRCS:.cpp=.o)

CFLAGS	=	-Wall -Wextra -Werror -std=c++11

%.o: %.cpp
	@c++ ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	@c++ ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re
