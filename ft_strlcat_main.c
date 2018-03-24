#include "libft.h"

int		main(void)
{
	char str[25] = "1234567890";
	char str3[25] = "1234567890";
	char str2[] = "abcdefghij";
	int i;

	i = 0;
	printf("%zu\n", ft_strlcat(str, str2, 15));
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	write(1, "\tft_\n", 5);

	i = 0;
	printf("%zu\n", strlcat(str3, str2, 15));
	while (str3[i] != '\0')
		write(1, &str3[i++], 1);
	write(1, "\toriginal\n", 10);
	return (0);
}
