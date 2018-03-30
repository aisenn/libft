/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 12:44:57 by aabdulla          #+#    #+#             */
/*   Updated: 2018/03/23 13:20:55 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
		while (len > 0)
		{
			*(d + len) = *(s + len);
			len--;
		}
	else
		while (len)
		{
			*d++ = *s++;
			len--;
		}
	return (dst);
}

int main (void)
{
	// Исходный массив данных
	unsigned char src[] = "1234567890";
	unsigned char src2[] = "1234567890";

	// Вывод массива src на консоль
	printf("src old: %s\n", src);
	printf("src2 old: %s\n", src2);

	// Копируем 3 байт
	memmove (&src[9], &src[1], 2);
	ft_memmove (&src2[9], &src2[1], 2);

	// Вывод массива src на консоль
	printf ("src new: %s\tmemove\n", src);
	printf ("src2 new: %s\tft_memove\n", src2);

	return 0;
}
