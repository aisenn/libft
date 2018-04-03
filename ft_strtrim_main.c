#include "libft.h"

int main(void)
{
	const char *str = "    *Hello \t qweq!    ";
	printf("%s\n", str);
	printf("|%s|  return", ft_strtrim(str));

	return (0);
}