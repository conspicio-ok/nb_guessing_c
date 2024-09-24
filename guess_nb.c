#include "nb_guess.h"

int	give_int(int min, int max)
{
	int	size;

	if (max < min)
		return (-1);
	if (max == min)
		return (0);
	size = max - min;
	srand(time(NULL));
	return (rand() % size + min);
}

int	ok_atoi(char *str)
{
	int	nb;
	int	neg;

	nb = 0;
	neg = 1;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	if (*str != '\n')
		return (-1);
	return (nb * neg);
}
