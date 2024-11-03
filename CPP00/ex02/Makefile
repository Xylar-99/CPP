
NAME = Job

SRC = Account.cpp tests.cpp


OBJ=$(SRC:.cpp=.o)

CC  = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 



all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ)

fclean:clean
	@rm -rf $(NAME)

re: fclean all


.SECONDARY: $(OBJ)
