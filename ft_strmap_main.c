#include "libft.h"

char func(char c)
{
  c = 'A';
  return (c);
}

int main(void)
{
	char *b = "override this !";
	char b2[0xF0];
	size_t size = ft_strlen(b);

	for (size_t i = 0; i < size; i++)
		b2[i] = func(b[i]);
	b2[size] = 0;
	char *ret = ft_strmap(b, func);
	if (!memcmp(b2, ret, size + 1))
	if (!strcmp(b2, ret))
		printf("succes\n");
	printf("fail\n");
}