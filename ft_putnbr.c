/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 21:20:40 by aabdulla          #+#    #+#             */
/*   Updated: 2018/04/06 21:20:47 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{

	if (n < 0)
	{
		ft_putchar('-');
		if (n < -2147483647)
			ft_putnbr(-(n + 1));
		else
			ft_putnbr(-n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar('0' + n);

}

int main(void)
{
	int a = -2147483647 - 1;

	ft_putnbr(a);
	return (0);
}