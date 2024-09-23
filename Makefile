NAME	= number_guessing
CC		= cc
WFLAGS	= -Wall -Werror -Wextra
SRC		= guess_nb.c main.c print.c usr.c
OBJ		= $(SRC:.c=.o)
RM		= rm -f

$(NAME):	$(OBJ)
	$(CC) $(WFLAGS) $^ -o $(NAME)

all:		$(NAME)
	./$(NAME)

.c.o:
	$(CC) $(WFLAGS) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all
