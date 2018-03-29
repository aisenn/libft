#include "libft.h"

int	ft_isprint(char ch)
{
	if (ch >= 32 && ch <= 126)
		if (ch >= 'A' && ch <= 'Z')
			return (1);
		else if (ch >= 'a' && ch <= 'z')
			return (2);
		else if (ch >= '0' && ch <= '9')
			return (4);
		else if (ch == ' ')
			return (64);
		else
			return (16);
	return (0);
}