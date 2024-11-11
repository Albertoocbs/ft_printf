/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutumur <aoutumur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:00:03 by aoutumur          #+#    #+#             */
/*   Updated: 2024/11/08 13:30:11 by aoutumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	ft_putstr(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}

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

static void	ft_putnbr_base(unsigned int num)
{
	if (num >= 16)
	{
		ft_putnbr_base(num / 16);
		ft_putnbr_base(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	unsigned long long	num;
	int					len;

	num = (unsigned long long)ptr;
	if (num == 0)
		return (ft_putstr("0x0"));
	ft_putstr("0x");
	ft_putnbr_base(num);
	len = ft_ptr_len(num);
	return (len + 2);
}
