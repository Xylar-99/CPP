
NAME = file

SRC = $(wildcard *.cpp)

OBJ=$(SRC:.cpp=.o)

CC  = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $? -o $(NAME) 

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean 
	@rm -rf $(NAME)

re: fclean all

.SECONDARY:
