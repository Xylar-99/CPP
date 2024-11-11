
NAME = Polymorphism

SRC = Amateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp IMateriaSource.cpp linked.cpp main.cpp MateriaSource.cpp



OBJ = $(SRC:.cpp=.o)

CMP  = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address


all: $(NAME)
	@rm -rf *.o

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
