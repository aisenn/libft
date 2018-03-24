#include "libft.h"

int		main(void)
{
	char str[21] = "1234567890";
	char str2[] = "abcdefghij";
	int i;

	i = 0;
	ft_strcat(str, str2);
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	return (0);
}
