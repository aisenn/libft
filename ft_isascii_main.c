#include "libft.h"

int main(void)
{
   int ch;
 
   for (ch = -5; ch <= 130; ch++) 
   {
	printf("%d\t%d\t", isascii(ch), ft_isascii(ch));
      printf("%d\t", ch);
      if (isascii(ch))
         printf("The character is %c\n", ch);
      else
         printf("Cannot be represented by an ASCII character\n");
   }
   return 0;
}