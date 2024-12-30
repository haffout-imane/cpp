NAME = Polymorphism

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)  Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
	c++ $(CPP_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp  Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
	c++ $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re