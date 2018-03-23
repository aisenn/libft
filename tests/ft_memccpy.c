/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 19:57:47 by aabdulla          #+#    #+#             */
/*   Updated: 2018/03/23 12:36:50 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n && (*s - 1) != (unsigned char)c)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}

int		main(void)
{
	char str[] = "123456790";
	char str2[] = "abcdefghj";

	char str3[] = "123456790";
	char str4[] = "abcdefghj";
	printf("%s\t%s\n", str2, str);
	printf("%s\t%s\n", str4, str3);
	memccpy(str2, str, '5', 10);
	ft_memccpy(str4, str3, '5', 10);
	printf("%s\t%s\tmemccpy\n", str2, str);
	printf("%s\t%s\tft_memccpy\n", str4, str3);

	return (0);
}
