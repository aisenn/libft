/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whitespace_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <aabdulla@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:57:17 by aabdulla          #+#    #+#             */
/*   Updated: 2019/04/17 18:57:18 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*whitespace_replace(char *str)
{
	char	*res;
	int		i;
	char	*ptr;

	res = NULL;
	if (str != NULL)
	{
		ptr = str;
		i = 0;
		res = ft_strnew((size_t)count_printable_chars(str));
		while (*ptr)
		{
			if (ft_isprint(*ptr) && !ft_isspace(*ptr))
			{
				res[i] = *ptr;
				i++;
			}
			ptr++;
		}
	}
	return (res);
}
