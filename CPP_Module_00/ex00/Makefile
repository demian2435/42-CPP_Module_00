NAME   = megaphone
SRC    = megaphone.cpp
CC     = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

re: fclean all

clean: fclean

fclean:
	rm -rf $(NAME)

run : $(NAME)
	./$(NAME) "shhhhh... I think the students are asleep..."
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	./$(NAME)

.phony : all re clean fclean run