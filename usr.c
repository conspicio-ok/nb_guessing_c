#include "nb_guess.h"

int	ok_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ok_bzero(char *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}

char	*ok_strcpyl(char *dest, char *src, int	size)
{
	int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ok_strjoin(char *s1, char *s2)
{
	int		len1;
	int		len2;
	char	*fusion;

	len1 = 0;
	len2 = 0;
	fusion = NULL;
	if (s1 || s2)
	{
		if (s1)
			len1 = ok_strlen(s1);
		if (s2)
			len2 = ok_strlen(s2);
		fusion = malloc((len1 + len2) + 1 * sizeof(char));
		if (!fusion)
			return (NULL);
		ok_bzero(fusion, len1 + len2 + 1);
		if (s1)
			ok_strcpyl(fusion, s1, len1 + 1);
		if (s2)
			ok_strcpyl(fusion, s2, len2 + 1);
	}
	free(s1);
	return (fusion);
}

char	*ok_scan(char *dest)
{
	int		rd;
	char	*tmp;

	tmp = malloc((16 + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	rd = 1;
	while (rd > 0)
	{
		ok_bzero(tmp, 16 + 1);
		rd = read(0, tmp, 16);
		if (rd < 0)
		{
			if (dest)
				free(dest);
			free(tmp);
			return (NULL);
		}
		dest = ok_strjoin(dest, tmp);
		if (!dest)
			rd = 0;
	}
	free(tmp);
	return (dest);
}

