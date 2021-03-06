/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <aabdulla@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 21:06:50 by aabdulla          #+#    #+#             */
/*   Updated: 2019/03/14 21:07:14 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_pow(double num, int pow)
{
	if (num == 0 || pow < 0)
		return (0);
	else if (pow == 0)
		return (1);
	else if (pow == 1)
		return (num);
	return (num * ft_pow(num, pow - 1));
}
