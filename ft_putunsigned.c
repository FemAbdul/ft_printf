/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-k <fabdul-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:59:29 by fabdul-k          #+#    #+#             */
/*   Updated: 2023/02/14 17:25:14 by fabdul-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int num)
{
	int		count;
	char	c;

	count = 0;
	if (num > 9 && num <= 4294967295)
	{
		count += ft_putunsigned(num / 10);
		count += ft_putunsigned(num % 10);
	}
	else if (num >= 0 && num <= 9)
	{
		c = num + '0';
		count += write(1, &c, 1);
	}
	return (count);
}
