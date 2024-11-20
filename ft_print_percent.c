/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutumur <aoutumur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:49:22 by aoutumur          #+#    #+#             */
/*   Updated: 2024/11/20 14:11:31 by aoutumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_percent(void)
{
	ft_print_char('%');
	return (1);
}

/*
Cette fonction affiche le caractere % dans la sortie standard on appelant la
fonction ft_print_char pour afficher le caractère.

Retourne toujours 1 car seul 1 caractere est affiché
*/