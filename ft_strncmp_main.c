#include "libft.h"

int main (void)
{    
   // Сравниваемые строки
   char str1[16] = "1234567890";
   char str2[16] = "1234007890";
  
   // Сравниваем первые пять символов двух строк
   printf("%d\n", strncmp(str1, str2, 5));

   return 0;
}