/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutumur <aoutumur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:44:10 by aoutumur          #+#    #+#             */
/*   Updated: 2024/11/20 12:16:23 by aoutumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		ft_print_char(str[i]);
		i++;
	}
	return (i);
}

/*
Cette fonction affiche une chaine de caracteres sur la sortie standard

Retourne la taille de la chaine de caracteres affichée (i).

Si la chaine est vide restourne 0.
*/