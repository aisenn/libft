/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 18:22:42 by aabdulla          #+#    #+#             */
/*   Updated: 2018/03/23 18:24:20 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
	char *p;

	p = dst;
	while (*src != '\0' && len)
	{
		*p++ = *src++; 
		len--;
	}
	while (*p && len != 0)
		*p++ = '\0';
		
	return(dst);
}