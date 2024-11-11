/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutumur <aoutumur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:59:45 by aoutumur          #+#    #+#             */
/*   Updated: 2024/11/07 12:55:41 by aoutumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	ft_ptr_len(unsigned int num)
{
	int	len;

	if (num == 0)
		return (1);
	len = 0;
	while (num != 0)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

static void	ft_putnbr_base(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_putnbr_base(num / 16, format);
		ft_putnbr_base(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (num == 'x')
				ft_putchar_fd(num - 10 + 'a', 1);
			if (num == 'X')
				ft_putchar_fd(num - 10 + 'A', 1);
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_putnbr_base(num, format);
	return (ft_ptr_len(num));
}
