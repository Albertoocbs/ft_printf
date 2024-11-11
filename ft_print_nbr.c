/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutumur <aoutumur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:53:32 by aoutumur          #+#    #+#             */
/*   Updated: 2024/11/08 13:29:59 by aoutumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_nbr(int n)
{
	int		str;
	char	*num;

	str = 0;
	num = ft_itoa(n);
	if (!num)
		return (0);
	str = ft_print_str(num);
	free(num);
	return (str);
}
/* Peut traiter %d et %i */