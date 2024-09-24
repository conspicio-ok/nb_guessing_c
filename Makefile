NAME	= number_guessing
CC		= cc
WFLAGS	= -Wall -Werror -Wextra
SRC		= guess_nb.c main.c print.c usr.c
OBJ		= $(SRC:.c=.o)
RM		= rm -f

$(NAME):	$(OBJ)
	@$(CC) $(WFLAGS) $^ -o $(NAME)
	@make clean
	@echo "The project as build successful, you can launch number_guessing"

all:		$(NAME)

.c.o:
	@$(CC) $(WFLAGS) -c $< -o $(<:.c=.o)

clean:
	@$(RM) $(OBJ)
	@echo "All tempory files are removed"

fclean:	
	@$(RM) $(NAME)
	@echo "All files of game removed, you can build again"

re:			fclean all
