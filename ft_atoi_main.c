#include "libft.h"

int main(int argc, char **argv)
{
	char n[15];

	__builtin___sprintf_chk (n, 0, __builtin_object_size (n, 2 > 1 ? 1 : 0), "%llu", (-99999999999999999999999999 -1));
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

    printf("%d\tatoi\n", atoi(n));
    printf("%d\tft_\n", ft_atoi(n));
	if (i1 == i2)
		printf("success");
	printf("fail");
}