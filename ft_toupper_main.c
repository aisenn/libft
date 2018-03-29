#include "libft.h"

int main(void)
{
	int ch;
		printf("chars\n");
		for (ch = 'A'; ch <= 'z'; ch++) 
		{
			if (ch == 90)
				ch += 7;
			printf("%c", ch);
		}
		printf("\norgnl\n");
		for (ch = 'A'; ch <= 'z'; ch++) 
		{
			if (ch == 90)
				ch += 7;
			printf("%c", toupper(ch));
		}
		printf("\nft_\n");
		for (ch = 'A'; ch <= 'z'; ch++) 
		{
			if (ch == 90)
				ch += 7;
			printf("%c", ft_toupper(ch));
		}
		printf("\n");
	return 0;
}