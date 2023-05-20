/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabdul-k <fabdul-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:27:15 by fabdul-k          #+#    #+#             */
/*   Updated: 2023/02/15 11:52:39 by fabdul-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int num);
int	ft_putunsigned(unsigned int num);
int	ft_printhex(unsigned long num, char spec);
int	ft_printf(const char *format, ...);

#endif