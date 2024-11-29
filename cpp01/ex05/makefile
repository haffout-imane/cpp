NAME = harl
CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) harl.hpp
	$(CPP) $(CPP_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp harl.hpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re