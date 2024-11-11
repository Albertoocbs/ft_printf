/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutumur <aoutumur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:18:17 by aoutumur          #+#    #+#             */
/*   Updated: 2024/11/07 13:05:27 by aoutumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_formats(va_list args, const char format)
{
	int	str;

	str = 0;
	if (format == 'c')
		str += ft_print_char(va_arg(args, int));
	else if (format == 's')
		str += ft_print_str(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		str += ft_print_nbr(va_arg(args, int));
	else if (format == 'p')
		str += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'u')
		str += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		str += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		str += ft_print_percent();
	return (str);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			len += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
