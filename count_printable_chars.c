/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_printable_chars.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <aabdulla@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:54:53 by aabdulla          #+#    #+#             */
/*   Updated: 2019/04/17 18:54:54 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			count_printable_chars(char *str)
{
	int		i;
	char	*ptr;

	if (str != NULL)
	{
		ptr = str;
		i = 0;
		while (*ptr)
		{
			if (ft_isprint(*ptr) && !ft_isspace(*ptr))
				i++;
			ptr++;
		}
		return (i);
	}
	return (-1);
}
