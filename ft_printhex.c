/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-k <fabdul-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:12:30 by fabdul-k          #+#    #+#             */
/*   Updated: 2023/02/14 20:20:46 by fabdul-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long num, char spec)
{
	char	*basehex;
	int		count;

	count = 0;
	if (spec == 'x')
		basehex = "0123456789abcdef";
	else if (spec == 'X')
		basehex = "0123456789ABCDEF";
	if (num < 16)
		count += ft_putchar(*(basehex + num));
	else
	{
		count += ft_printhex(num / 16, spec);
		count += ft_printhex(num % 16, spec);
	}
	return (count);
}
