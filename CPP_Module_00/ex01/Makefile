NAME   = rubrica_brutta
SRC    = main.cpp Rubrica.cpp Contatto.cpp
CC     = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

re: fclean all

clean: fclean

fclean:
	rm -f $(NAME)

run : $(NAME)
	./$(NAME)

.phony : all re clean fclean run