#include "nb_guess.h"

int	main(void)
{
	int	nb;
	char	*tmp;

	nb = give_int(0, 100);
	ok_putint(nb);
	write(1, "\n", 1);
	ok_putint(ok_atoi("65"));
	write(1, "\n", 1);
	ok_putstr("i put text ?\n");
	tmp = NULL;
	tmp = ok_scan(tmp);
	write(1, "\n", 1);
	ok_putstr(tmp);
	return (0);
}
