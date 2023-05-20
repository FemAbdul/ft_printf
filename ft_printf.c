/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-k <fabdul-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:26:16 by fabdul-k          #+#    #+#             */
/*   Updated: 2023/02/15 11:54:30 by fabdul-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkspecifier(va_list arg, char spec, int count)
{
	if (spec == '%')
	{
		write(1, &spec, 1);
		count += 1;
	}
	if (spec == 'c')
		count += ft_putchar(va_arg(arg, int));
	if (spec == 's')
		count += ft_putstr(va_arg(arg, char *));
	if (spec == 'd' || spec == 'i')
		count += ft_putnbr(va_arg(arg, int));
	if (spec == 'u')
		count += ft_putunsigned(va_arg(arg, unsigned int));
	if (spec == 'x' || spec == 'X')
		count += ft_printhex(va_arg(arg, unsigned int), spec);
	if (spec == 'p')
	{
		count += ft_putstr("0x");
		count += ft_printhex(va_arg(arg, unsigned long), 'x');
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count = ft_checkspecifier(arg, format[i + 1], count);
			i++;
		}
		else
		{
			count += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(arg);
	return (count);
}

// int	main(void)
// {
// 	int		f;
// 	int		act;
// 	char	c = 'A';
// 	char	*s = "BCD";

// 	f = ft_printf("%c", c );
// 	printf("\n");
// 	act = printf("%c", c);
// 	printf("\n%d : %d\n", f, act);
// }
