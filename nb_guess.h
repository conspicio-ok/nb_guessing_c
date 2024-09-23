#ifndef NB_GUESS
# define NB_GUESS

# include <unistd.h>
# include <stdlib.h>
# include <time.h>

int		give_int(int min, int max);
int		ok_atoi(char *str);
void	ok_putstr(char *str);
void	ok_putint(int nb);
char	*ok_scan(char *dest);

#endif
