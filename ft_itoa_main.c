#include "libft.h"

int		main(int argc, char **argv)
{
	char *str;


	if (argc == 2)
	{
		str = ft_itoa(atoi(argv[1]));
		printf("str %s\n", str);
	}
	else if (argc < 2)
		printf("Нет аргумента!!!");
	else
		printf("Много аргументов!!!");
	return (0);
}