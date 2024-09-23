#include "nb_guess.h"

void	ok_putchar(char a)
{
	write(1, &a, 1);
}

void	ok_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ok_putint(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ok_putint(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ok_putint(-nb);
	}
	if (nb > 9)
		ok_putint(nb / 10);
	ok_putchar(nb % 10 + '0');
}

