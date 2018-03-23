/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 20:47:29 by aabdulla          #+#    #+#             */
/*   Updated: 2018/03/23 20:47:31 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main(void)
{
    char	*str1 = "String to copy";
	char	*str2;
	int		len = strlen(str1);

	str2 = (char *)malloc(len);
	ft_strncpy(str2, str1, 20);
	for (int i = 0; i <= len; i++ )
	{
		write(1, &str1[i], 1);
	}
} 