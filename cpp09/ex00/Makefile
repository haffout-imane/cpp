NAME = BitcoinExchange

SRCS = main.cpp BitcoinExchange.cpp

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) BitcoinExchange.hpp
	c++ $(CPP_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp BitcoinExchange.hpp
	c++ $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
