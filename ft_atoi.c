#include "libft.h"

int	ft_atoi(const char *str)
{
	int num;
	int old;
	int m;

	num = 0;
	old = 0;
	m = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			m = -1;
	while (*str >= '0' && *str <= '9')
	{
		old = num;
		num = (num * 10) + (*str++ - '0');
		if (old > num)
            return (m ? 0 : -1);
	}
	return (m ? -num : num);
}