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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
	size_t n;
	
	i = 0;
	/*
	**len = 0; REMOVE!!!
	*/
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		n = len;
		if (haystack[i] == needle[j])
			while (haystack[i + j] == needle[j] && needle[j] != '\0' && n != 0)
			{
				j++;
				n--;
			}
		if (needle[j] == '\0' && haystack[i + j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}