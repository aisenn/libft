#include "libft.h"

int main (void)
{
	// Массив со строкой для поиска
	char *str1 = "MZIRIBMZIRIBMZP";
	// Набор символов, которые должны входить в искомый сегмент
	char *str2 = "MZIRIBMZP";
	// Переменная, в которую будет занесен адрес первой найденной строки
	char *istr;
	char *istr2;
	//Поиск строки
	istr = ft_strstr (str1, str2);
	istr2 = strstr (str1, str2);

	//Вывод результата поиска на консоль
	if (istr == NULL)
		printf ("Строка не найдена\n");
	else
		printf ("Искомая строка начинается с символа %ld\n", istr-str1+1);

	if (istr2 == NULL)
		printf ("Строка не найдена\n");
	else
		printf ("Искомая строка начинается с символа %ld\n", istr2-str1+1);
	return 0;
}
