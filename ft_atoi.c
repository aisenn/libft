#include "libft.h"

int ft_atoi(const char *str)
{
    int num;
    int m;

    num = 0;
    m = 1;
    while (*str <= 32)
        str++;
    if (*str == '+' || *str == '-')
        if (*str++ == '-')
            m = -1;
    while (*str >= '0' && *str <= '9')
        num = (num * 10) + (*str++ - '0');
    return (num * m);
}