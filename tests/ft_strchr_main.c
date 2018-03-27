#include "libft.h"

int		main (void)
{    
	// Массив со строкой для поиска
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	// Код искомого символа
	//int ch = '\0';
	// Указатель на искомую переменную в строке,
	// по которой осуществляется поиск.
	char *ach;
	char *ach2;

	// Ищем символ ‘6’
	ach = ft_strchr(src, '\0');

	// Выводим результат на консоль
	if (ach == NULL)
		printf ("Символ в строке не найден\n");
	else
		printf ("Искомый символ в строке на позиции # %ld\n",ach-src+1);

	ach2 = strchr(src, '\0');
	if (ach == NULL)
		printf ("Символ в строке не найден\n");
	else
		printf ("Искомый символ в строке на позиции # %ld\n",ach2-src+1);
	return 0;
}