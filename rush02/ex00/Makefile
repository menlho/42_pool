# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scdubois <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 13:52:29 by scdubois          #+#    #+#              #
#    Updated: 2023/02/18 13:53:55 by scdubois         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SOURCES = srcs/rush02_1.c \
			 srcs/rush02_2.c \
			 srcs/rush02_3.c \
			 srcs/rush02_4.c

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	cc -o $(NAME) $(OBJECTS)

all:
	make

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJECTS)
