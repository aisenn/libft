#include "libft.h"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("%d\tatoi\n", atoi(argv[1]));
        printf("%d\tft_atoi\n", ft_atoi(argv[1]));
    }
    else if (argc < 2)
        printf("%s\n", "Нет аргумента");
    else
        printf("%s\n", "Много аргументов");
    return (0);
}