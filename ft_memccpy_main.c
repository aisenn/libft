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
	unsigned char ch;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	ch = c;
	if (n)
		while (n)
		{
			if ((*d++ = *s++) == ch)
				return (d);
			n--;
		}
	return (0);
}

int        main(void)
{
	char src[] = "test basic du memccpy !";
	char buff1[22];

	__builtin___memset_chk (buff1, 0, sizeof(buff1), __builtin_object_size (buff1, 0));
	char *r1 = __builtin___memccpy_chk (buff1, src, 'm', 22, __builtin_object_size (buff1, 0));
	char *r2 = ft_memccpy(buff1, src, 'm', 22);

	printf("%s\n", r1);
	printf("%s\n", r2);
	if (r1 != r2)
		printf("fail\n");
	r1 = __builtin___memccpy_chk ("", src, 'm', 0, __builtin_object_size ("", 0));
	r2 = ft_memccpy("", src, 'm', 0);
	if (r1 != r2)
		printf("fail2\n");
	printf("success\n");
    return (0);
}
