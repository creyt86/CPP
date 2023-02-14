NAME = sed
SRCS = main.cpp
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

$(NAME): $(OBJS)
		$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		rm -f ${OBJS}

flcean: clean
		rm -f $(NAME)

re:		fclean all

cheaks:
		leaks --atExit -- ./${NAME}

.PHONY: all clean fclean re cheaks
