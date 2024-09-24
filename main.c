#include "nb_guess.h"

int	usr_nb(void)
{
	char	*tmp;

	tmp = NULL;
	ok_putstr("please choose a number between 0 to 100\n");
	tmp = ok_scan(tmp);
	if (tmp == NULL)
		return (-1);
	return (ok_atoi(tmp));
}

void	check(int nb_usr, int nb)
{
		if (nb_usr == nb)
			ok_putstr("This is the right number !\n");
		else if (nb_usr > nb)
			ok_putstr("It's minus\n");
		else
			ok_putstr("It's more\n");
}

int	game(void)
{
	int	nb;
	int	nb_usr;
	int	laps;

	nb = give_int(0, 100);
	laps = 10;
	while (laps > 0)
	{
		nb_usr = usr_nb();
		if (nb_usr == -1)
			return (-1);
		check(nb_usr, nb);
		if (nb_usr == nb)
			laps = 1;
		laps--;
		ok_putstr("\n");
	}
	if (nb == nb_usr)
		ok_putstr("Felicitation\n");
	else
		ok_putstr("You're loose, try again !\n");
	return (0);
}
			
int	main(void)
{
	int	game_error;

	game_error = game();
	if (game_error == -1)
		ok_putstr("Sorry, we have an error, relaunch or contact support");
	return (0);
}
