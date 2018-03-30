#include "libft.h"

int main (void)
{    
	// Массивы в которые добавляется строка
	char res1[] = "\0AAAAAAAAAAAAAAAA";
	char res2[] = "\0AAAAAAAAAAAAAAAA";
	// Добавляемая строка
	char *src = "n\0AAAAAAAAAAAAAAAAA";

	// Вывод добавляемой строки
	printf ("src:  %s\n", src);

	// Добавление строки app в строку src1, но не более трех символов
	strncat (res1, src, 3);
	// Вывод результата
	printf ("orgnl: %s\n",res1);	

	// Добавление строки app в строку src2, но не более семи символов
	ft_strncat (res2, src, 3);
	// Вывод результата
	printf ("  ft_: %s\n",res2);

	return 0;
}