#include "libft.h"

int main (void)
{    
	// Массивы в которые добавляется строка
	char src1[15]= "000";
	char src2[15]= "000";
	// Добавляемая строка
	char app[20]= "1234567890abcdefghij";

	// Вывод добавляемой строки
	printf ("app:  %s\n", app);

	// Добавление строки app в строку src1, но не более трех символов
	strncat (src1, app, 3);
	// Вывод результата
	printf ("src1: %s\n",src1);	

	// Добавление строки app в строку src2, но не более семи символов
	strncat (src2, app, 7);
	// Вывод результата
	printf ("src2: %s\n",src2);

	return 0;
}