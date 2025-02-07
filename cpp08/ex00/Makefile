NAME = easyfind

SRCS = main.cpp

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) easyfind.hpp easyfind.tpp
	c++ $(CPP_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp easyfind.hpp easyfind.tpp
	c++ $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
