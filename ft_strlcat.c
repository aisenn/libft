/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 15:55:54 by aabdulla          #+#    #+#             */
/*   Updated: 2018/03/24 15:55:55 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char *p;
	int i;

	p = dst;
	i = 0;
	while (p[i] != '\0')
		i++;
	dstsize -= i;
	while (*src && dstsize != 0)
	{
		p[i++] = *src++;
		dstsize--;
	}
	if (dstsize == 0)
		*p = '\0';
	return ((size_t)i);
}