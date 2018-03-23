/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 13:42:46 by aabdulla          #+#    #+#             */
/*   Updated: 2018/03/23 14:00:06 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *arr;

	arr = (unsigned char *)s;
	while (n)
	{
		if (*arr != (unsigned char)c)
			arr++;
		else
			return (arr);
		n--;
	}
	return (NULL);
}

int		main(void)
{
	// Исходный массив
	unsigned char src[15] = "1234567890";
	unsigned char src2[15] = "1234567890";
	// Переменная, в которую будет сохранен указатель
	// на искомый символ.
	char *sym;
	char *sym2;

	// Вывод исходного массива
	printf ("src old: %s\n", src);
	printf ("src2 old: %s\n", src2);

	// Поиск требуемого символа
	sym = memchr (src, 'a', 10);
	sym2 = ft_memchr (src2, 'a', 10);

	// Если требуемый символ найден, то заменяем его
	// на символ '!'
	if (sym != NULL)
		sym[0] = '!';
	if (sym2 != NULL)
		sym2[0] = '!';

	// Вывод исходного массива
	printf ("src new: %s\n", src);
	printf ("src2 new: %s\n", src2);

	return 0;
}
