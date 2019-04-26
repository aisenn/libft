/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <aabdulla@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 21:04:22 by aabdulla          #+#    #+#             */
/*   Updated: 2019/03/14 21:06:31 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		ft_atof(char *str)
{
	char	*ptr;
	double	res;
	double	fl;

	if (str == NULL)
		return (0);
	res = ft_atoi(str);
	ptr = str;
	while (ft_isspace(*ptr))
		ptr++;
	if (*ptr == '-' || *ptr == '+')
		ptr++;
	while (ft_isdigit(*ptr) && *ptr != '\0')
		ptr++;
	if (*ptr == '.')
	{
		fl = ft_atoi(++ptr);
		fl = fl * ft_pow(0.1, ft_intlen((int)fl));
		if (res < 0)
			fl *= -1;
		res += fl;
	}
	return (res);
}
