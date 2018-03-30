#include "libft.h"

int main(int argc, char **argv)
{
    /*char n[130][3];
    char c = 0;
    for (int i = 0; i <= 130; i++)
    {
        n[i][0] = c + i;
        n[i][1] = 57;
        n[i][2] = c;
    }*/
    if (argc == 2)
    {   /*
        for (int i = 0; i < 130; i++)
        {
            if (atoi(n[i]) != ft_atoi(n[i]))
            {
                printf("\t\t\t\t**********Differ*********\n");
                printf("\t\t\t\t%s\t%d\n", n[i], n[i][0]);
                printf("\t\t\t\t\t%d\tatoi\n", atoi(n[i]));
                printf("\t\t\t\t\t%d\tft_atoi\n", ft_atoi(n[i]));
            }
            else
            {
                printf("%s\t%d\n", n[i], n[i][0]);
                printf("\t%d\tatoi\n", atoi(n[i]));
                printf("\t%d\tft_atoi\n", ft_atoi(n[i]));
            }
        }*/
        printf("%d\tatoi\n", atoi(argv[1]));
        printf("%d\tft_atoi\n", ft_atoi(argv[1]));
    }
    else if (argc < 2)
        printf("%s\n", "Нет аргумента");
    else
        printf("%s\n", "Много аргументов");
    return (0);
}