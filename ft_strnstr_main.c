#include "libft.h"

int main(void)
{
	char *s1 = "see FF your FF return FF now FF";
	char *s2 = "FF";
	size_t max = strlen(s1);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);

	printf("%s\n", strnstr(s1, s2, max));
	printf("%s\n", ft_strnstr(s1, s2, max));
	if (i1 == i2)
		printf("success\n");
	printf("fail\n");

	return (0);
}