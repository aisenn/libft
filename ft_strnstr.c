/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:30:51 by aabdulla          #+#    #+#             */
/*   Updated: 2018/03/27 20:30:52 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s, const char *find, size_t slen)
{
    char c;
	char sc;
    size_t len;

    if ((c = *find++) != '\0')
	{
        len = ft_strlen(find);
        while (ft_strncmp(s, find, len) != 0) 
		{
            while (sc != c) 
			{
                if ((sc = *s++) == '\0' || slen-- < 1)
                    return (NULL);
            }
            if (len > slen)
                return (NULL);
        }
        s--;
    }
    return ((char *)s);
}

/*
char *ft_strnstr(s, find, slen)
    const char *s;
    const char *find;
    size_t slen;
{
    char c, sc;
    size_t len;

    if ((c = *find++) != '\0') {
        len = strlen(find);
        do {
            do {
                if ((sc = *s++) == '\0' || slen-- < 1)
                    return (NULL);
            } while (sc != c);
            if (len > slen)
                return (NULL);
        } while (strncmp(s, find, len) != 0);
        s--;
    }
    return ((char *)s);
}
*/