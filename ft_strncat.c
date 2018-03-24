/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 15:39:06 by aabdulla          #+#    #+#             */
/*   Updated: 2018/03/24 15:39:10 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *p;

	p = s1;
	while (*p)
		p++;
	while (*s2 && n != 0)
	{
		*p++ = *s2++;
		n--;
	}
	*p = *s2;

	return (s1);
}