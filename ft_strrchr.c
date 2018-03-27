/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:48:42 by aabdulla          #+#    #+#             */
/*   Updated: 2018/03/27 19:08:47 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;
	int			i;

	p = s;
	i = 0;
	while (p[i] != '\0')
		i++;
	while (i != 0)
	{
		if (p[i] == c)
			return ((char *)&p[i]);
		i--;
	}
	return (NULL);
}
