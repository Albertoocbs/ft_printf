/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutumur <aoutumur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:44:48 by aoutumur          #+#    #+#             */
/*   Updated: 2024/11/20 14:10:20 by aoutumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	return (1);
}

/* 
Cette fonction affiche un caractere dans la sortie standard
Retourne toujours 1, car un seul caractère est affiché.
*/