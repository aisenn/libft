/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:23:52 by aabdulla          #+#    #+#             */
/*   Updated: 2018/03/23 14:23:56 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n)
	{
		if (*str1 != *str2)
			return ((int)(*str1 - *str2));
			str1++;
			str2++;
		n--;
	}
	return (0);
}

int main (void)
{
	// Исходные массивы
	unsigned char src[15]= "1234567090";
	unsigned char dst[15]= "1234567890";

	unsigned char src2[15]= "1234567090";
	unsigned char dst2[15]= "1234567890";

	// Сравниваем первые 10 байт массивов
	// и результат выводим на экран
	printf("%d\tmemcmp\n", memcmp (src, dst, 10));

	printf("%d\tft_memcmp\n", ft_memcmp(src2, dst2, 10));

   return 0;
}