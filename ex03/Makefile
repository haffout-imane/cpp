NAME = bsp

SRCS = main.cpp bsp.cpp Point.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS) Fixed.hpp Point.hpp
	c++ $(CPP_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Fixed.hpp Point.hpp
	c++ $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re