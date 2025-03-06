NAME = PmergeMe

SRCS = main.cpp PmergeMe.cpp

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) PmergeMe.hpp
	c++ $(CPP_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp PmergeMe.hpp
	c++ $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re