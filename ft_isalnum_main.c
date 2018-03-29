#include "libft.h"

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc >= 2)
		while (i < argc)
		{
			printf("\t--argv[%d]--\n", i);
			printf("char\torgnl\tft_\n");
			while (*argv[i])
			{
				if (ft_isalnum(argv[i][0]) > 0)
					printf("|%c|\t  %d\t %d\t%s\n", argv[i][0], isalnum(argv[i][0]), ft_isalnum(argv[i][0]), "is alphanumeric");
				else 
					printf("|%c|\t  %d\t %d\t%s\n", argv[i][0], isalnum(argv[i][0]), ft_isalnum(argv[i][0]), "is not alphanumeric");
				argv[i]++;
			}
			i++;
		}
	else if (argc < 2)
		printf("%s\n","Нет аргумента!!!");
	return (0); 
}