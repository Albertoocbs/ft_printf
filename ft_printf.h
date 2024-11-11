/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutumur <aoutumur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:26:12 by aoutumur          #+#    #+#             */
/*   Updated: 2024/11/08 10:28:42 by aoutumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/*------------------ Printf Function ----------------*/
int	ft_printf(const char *str, ...);

/*--------------- Conversions Functions -----------------*/
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_nbr(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int num, const char format);
int	ft_print_percent(void);

#endif
