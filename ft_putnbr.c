/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-k <fabdul-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:14:30 by fabdul-k          #+#    #+#             */
/*   Updated: 2023/02/14 20:16:45 by fabdul-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int		count;
	char	c;

	count = 0;
	if (num == -2147483648)
		count += ft_putstr("-2147483648");
	else if (num < 0)
	{
		count += ft_putchar('-');
		num = num * -1;
		count += ft_putnbr(num);
	}
	else if (num > 9 && num <= 2147483647)
	{
		count += ft_putnbr(num / 10);
		count += ft_putnbr(num % 10);
	}
	else if (num <= 9)
	{
		c = num + '0';
		count += write(1, &c, 1);
	}
	return (count);
}
