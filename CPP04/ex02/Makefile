
NAME = Polymorphism

SRC = Animal.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp


OBJ = $(SRC:.cpp=.o)

CMP  = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address


all: $(NAME)

$(NAME): $(OBJ)
	$(CMP) $(CFLAGS) $(OBJ) -o $(NAME) 

%.o:%.cpp
	$(CMP) $(CFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean 
	@rm -rf $(NAME)

re: fclean	all

.SECONDARY: $(OBJ)
